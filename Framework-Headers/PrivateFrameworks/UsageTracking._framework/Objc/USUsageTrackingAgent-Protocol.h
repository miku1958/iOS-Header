//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol USUsageTrackingAgent
- (void)startVideoUsageForBundleIdentifier:(NSString *)arg1 URL:(NSURL *)arg2 mediaURL:(NSURL *)arg3 usageTrusted:(BOOL)arg4 replyHandler:(void (^)(void))arg5;
- (void)stopVideoUsageForBundleIdentifier:(NSString *)arg1 URL:(NSURL *)arg2 mediaURL:(NSURL *)arg3 usageTrusted:(BOOL)arg4 replyHandler:(void (^)(void))arg5;
@end
