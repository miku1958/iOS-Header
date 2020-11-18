//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASDBetaAppFeedback, ASDBetaAppLaunchInfo, ASDBetaAppVersion, NSDictionary, NSString;

@protocol ASDTestFlightFeedbackServiceProtocol
- (void)getDisplayNamesForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppDisplayNames *))arg2;
- (void)getEmailAddressForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *))arg2;
- (void)getFeedbackMetadataForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppFeedbackMetadata *, NSError *))arg2;
- (void)getLaunchInfoForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(ASDBetaAppLaunchInfo *, NSError *))arg2;
- (void)getLaunchInfoForVersion:(ASDBetaAppVersion *)arg1 withCompletionHandler:(void (^)(ASDBetaAppLaunchInfo *, NSError *))arg2;
- (void)isFeedbackEnabledForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL))arg2;
- (void)isLaunchScreenEnabledForBundleID:(NSString *)arg1 withCompletionHandler:(void (^)(BOOL))arg2;
- (void)setFeedbackEnabled:(BOOL)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)setLaunchInfo:(ASDBetaAppLaunchInfo *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)setLaunchScreenEnabled:(BOOL)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)submitFeedback:(ASDBetaAppFeedback *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)updateTestNotes:(NSDictionary *)arg1 forVersion:(ASDBetaAppVersion *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
@end
