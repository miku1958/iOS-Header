//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary, NSString, NSURL, NSUUID, _LSAppLinkOpenState;

@protocol _LSDOpenProtocol
- (void)canOpenURL:(NSURL *)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)failedToOpenApplication:(NSString *)arg1 withURL:(NSURL *)arg2;
- (void)finishOpenOperationWithURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)getAppLinkOpenStrategyForBundleIdentifier:(NSString *)arg1 completionHandler:(void (^)(BOOL, long long, NSError *))arg2;
- (void)openAppLinkOpenState:(_LSAppLinkOpenState *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)openApplicationWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)openURL:(NSURL *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)openUserActivityWithUniqueIdentifier:(NSUUID *)arg1 activityData:(NSData *)arg2 activityType:(NSString *)arg3 bundleIdentifier:(NSString *)arg4 options:(NSDictionary *)arg5 completionHandler:(void (^)(BOOL, NSError *))arg6;
- (void)resolveAppLinkForURL:(NSURL *)arg1 completionHandler:(void (^)(LSAppLink *, NSError *))arg2;
- (void)setAppLinkOpenStrategy:(long long)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)startOpenOperationWithURL:(NSURL *)arg1 applicationIdentifier:(NSString *)arg2 userSpecifiedApplication:(BOOL)arg3 documentIdentifier:(NSString *)arg4 userInfo:(id)arg5 options:(NSDictionary *)arg6 completionHandler:(void (^)(BOOL, NSError *))arg7;
@end
