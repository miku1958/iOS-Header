//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDAssertion.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HDClientKeepAliveAssertion : HDAssertion
{
    long long _launchCount;
    NSDate *_lastLaunchAttempt;
    NSString *_clientBundleIdentifier;
    NSDictionary *_payloadOptions;
}

@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property (copy, nonatomic) NSDate *lastLaunchAttempt; // @synthesize lastLaunchAttempt=_lastLaunchAttempt;
@property (nonatomic) long long launchCount; // @synthesize launchCount=_launchCount;
@property (readonly, copy, nonatomic) NSDictionary *payloadOptions; // @synthesize payloadOptions=_payloadOptions;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)arg1 clientBundleIdentifier:(id)arg2 payloadOptions:(id)arg3;

@end

