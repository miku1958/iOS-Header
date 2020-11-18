//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSUserDefaults, VSDevice;

__attribute__((visibility("hidden")))
@interface VSPreferences : NSObject
{
    NSUserDefaults *_userDefaults;
    VSDevice *_device;
}

@property (nonatomic) long long cachedAvailabilityStatus;
@property (nonatomic) long long cachedDeveloperProviderStatus;
@property (nonatomic) long long cachedStoreProviderStatus;
@property (strong, nonatomic) VSDevice *device; // @synthesize device=_device;
@property (readonly, nonatomic) BOOL hasSentWelcomeMessage;
@property (readonly, copy, nonatomic) NSURL *overridingAppBootURL;
@property (readonly, nonatomic) BOOL shouldAlwaysAllowRemoteInspection;
@property (readonly, nonatomic) BOOL shouldDisableRequestTimeouts;
@property (strong, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

- (void).cxx_destruct;
- (BOOL)hasAcknowledgedUnsupportedIdentityProvider:(id)arg1;
- (void)noteDidAcknowledgeUnsupportedIdentityProvider:(id)arg1;
- (void)noteDidSendWelcomeMessage;

@end

