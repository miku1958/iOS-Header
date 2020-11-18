//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGTrialClientWrapper.h>

@class _PASLock;

@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper
{
    _PASLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)baseModelName;
- (id)engineConfig;
- (BOOL)foundInMailNotifications;
- (id)init;
- (id)notificationsAllowListOverride;
- (id)structuredEventInputMapping;
- (id)structuredEventOutputMapping;
- (id)supportedProviders;
- (void)updateFactors;

@end
