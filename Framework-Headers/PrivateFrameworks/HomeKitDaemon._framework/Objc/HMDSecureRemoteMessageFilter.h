//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

@interface HMDSecureRemoteMessageFilter : HMDMessageFilter
{
}

+ (BOOL)isWhitelistedMessage:(id)arg1;
+ (id)logCategory;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (id)logIdentifier;

@end

