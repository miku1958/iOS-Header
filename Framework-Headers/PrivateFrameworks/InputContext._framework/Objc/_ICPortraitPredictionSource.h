//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICFeedbackAccepting-Protocol.h>
#import <InputContext/_ICPredictionSourcing-Protocol.h>

@class NSCondition, NSString, PPQuickTypeBroker;

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing, _ICFeedbackAccepting>
{
    NSCondition *_ppBrokerLoadedCondition;
    NSString *_name;
    PPQuickTypeBroker *_ppBroker;
}

@property (strong) PPQuickTypeBroker *ppBroker; // @synthesize ppBroker=_ppBroker;

- (void).cxx_destruct;
- (id)_makePPQuickTypeBroker;
- (BOOL)_populateError:(id *)arg1 withExplanations:(id)arg2;
- (id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3;
- (id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id *)arg5;
- (BOOL)doesSupportTriggerSourceType:(unsigned char)arg1;
- (id)getPPBroker;
- (void)hibernate;
- (id)init;
- (id)name;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)propogateMetrics:(id)arg1 data:(id)arg2;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)warmUp;

@end
