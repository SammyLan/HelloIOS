//
//  WSLoginSDKBase.m
//  WSLoginSDK
//
//  Created by 蓝秀文 on 2018/12/14.
//  Copyright © 2018 蓝秀文. All rights reserved.
//

#import "WSLoginSDKBase.h"

@implementation WSLoginSDKBase

- (BOOL) quickLogin:(id<OpenSDKWrapperDelegate>)delegate{
    return NO;
}

- (void)logout{
    
}

+ (BOOL) isOpenSDKLoginType:(NSInteger) loginType{
    return YES;
}

+ (WSLoginSDKBase *) getOpenSDKByType:(WnsSDKLoginType) loginType{
    
    return nil;
}

- (instancetype) initWithLoginType:(WnsSDKLoginType) loginType{
    self = [super init];
    return self;
}
- (void) setBaseInfoForFB{
}

- (void) setBaseInfoForTWT{
}

- (void) setBaseInfoForGP{
    
}

+ (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions{
    
    return YES;
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions{
    return NO;
}
+ (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options{
    
    
    return NO;
}

+ (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation{
    
    return NO;
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation{
    return NO;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options{
    return NO;
}


+(void) loginWithLoginType:(WnsSDKLoginType) loginType callback:(LoginCallback) callback delegate:(id<OpenSDKWrapperDelegate>)delegate{
    
}
@end
