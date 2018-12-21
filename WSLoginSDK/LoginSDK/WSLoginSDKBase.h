//
//  WSLoginSDKBase.h
//  WSLoginSDK
//
//  Created by 蓝秀文 on 2018/12/14.
//  Copyright © 2018 蓝秀文. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WnsSDK/WnsSDK.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^LoginCallback)(NSError * error);

@class WSLoginSDKBase;

@protocol OpenSDKWrapperDelegate <NSObject>

@optional
- (void)openSDKLogInStart:(WSLoginSDKBase *)aWrapper;
- (void)openSDKLogInDidFail:(WSLoginSDKBase *)aWrapper error:(NSError *)error;
- (void)openSDKLogInDidSuccess:(WSLoginSDKBase *)aWrapper;
- (void)openSDKLogInDidLogOut:(WSLoginSDKBase *)aWrapper;
@end


@interface WSLoginSDKBase : NSObject
@property (nonatomic, assign)   UInt64 beginTime;
@property (nonatomic, assign)   NSInteger authVersion;
@property (nonatomic, assign,readonly)   NSInteger loginType;
@property (nonatomic, copy,readonly)     NSString *loginTypeDesc;
@property (nonatomic, copy, readonly)    NSString * loginFailMessage;
@property (nonatomic, copy, readonly)    NSString * loginCancelMessage;
@property (nonatomic, copy,readonly)     NSString *loginTypeStr;
@property (nonatomic, copy,readonly)    NSString * reportCmd;
@property (nonatomic, assign,readonly)   NSInteger openIDType;
@property (nonatomic, copy,readonly)    NSString * openIDTypeStr;
@property (nonatomic, assign,readonly)   NSInteger loginTypeForUpload;
@property (nonatomic, assign,readonly)   NSInteger jce_import_type;//好友导入
@property (nonatomic, assign,readonly)   NSInteger loginResInfoKeyType;


@property (nonatomic, assign)   BOOL isCancelByUser;
@property (nonatomic, copy)    NSString *accessToken;
@property (nonatomic, copy)    NSString *authTokenSecret;
@property (nonatomic, copy)    NSString *userName;
@property (nonatomic, copy)    NSString *userID;
@property (nonatomic, strong)   NSDate * expirationDate;



+ (void) loginWithLoginType:(WnsSDKLoginType) loginType callback:(LoginCallback) callback delegate:(id<OpenSDKWrapperDelegate>)delegate;
+ (WSLoginSDKBase *) getOpenSDKByType:(WnsSDKLoginType) loginType;
+ (BOOL) isOpenSDKLoginType:(NSInteger) loginType;

- (instancetype) initWithLoginType:(WnsSDKLoginType) loginType;
- (BOOL)quickLogin:(id<OpenSDKWrapperDelegate>)delegate;
- (void)logout;

+ (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
+ (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
+ (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

@end

NS_ASSUME_NONNULL_END
