//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PEXConnectionsMetricsTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)donationSourceFromBundleID:(id)arg1;
+ (unsigned char)itemSourceForConnectionsSource:(id)arg1;
+ (id)sharedInstance;
+ (id)triggerFromCriteria:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)privacyFriendlyBundleIdentifierWith:(id)arg1;
- (void)trackConversionGoalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 converted:(BOOL)arg6;
- (void)trackDismissalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5;
- (void)trackDonationFromBundleId:(id)arg1 source:(id)arg2 hasLatLon:(BOOL)arg3 isEligible:(BOOL)arg4;
- (void)trackOpportunityForConsumer:(id)arg1 trigger:(id)arg2 targetApp:(id)arg3;
- (void)trackPasteboardItemFromBundleId:(id)arg1 hasAddress:(BOOL)arg2 isEligible:(BOOL)arg3;
- (void)trackTimingForConsumer:(id)arg1 time:(unsigned long long)arg2;

@end

