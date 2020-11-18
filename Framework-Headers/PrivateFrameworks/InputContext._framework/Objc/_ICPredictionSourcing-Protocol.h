//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class _ICProactiveTrigger, _ICSearchContext;

@protocol _ICPredictionSourcing
- (void)hibernate;
- (void)predictedItemsWithProactiveTrigger:(_ICProactiveTrigger *)arg1 searchContext:(_ICSearchContext *)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(void (^)(NSArray *, NSError *))arg5;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(void (^)(NSArray *))arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(void (^)(NSArray *))arg2;
- (void)warmUp;
@end

