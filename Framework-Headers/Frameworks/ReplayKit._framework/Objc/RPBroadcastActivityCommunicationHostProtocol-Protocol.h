//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol RPBroadcastActivityCommunicationHostProtocol
- (oneway void)extensionDidFinishWithLaunchURL:(NSURL *)arg1 broadcastURL:(NSURL *)arg2 extensionBundleID:(NSString *)arg3 cancelled:(BOOL)arg4;
- (oneway void)presentationInfoWithCompletion:(void (^)(long long, struct CGRect, unsigned long long))arg1;
@end

