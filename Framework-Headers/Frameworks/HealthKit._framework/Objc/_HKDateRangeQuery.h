//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@interface _HKDateRangeQuery : HKQuery
{
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (CDUnknownBlockType)_queue_errorHandler;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (BOOL)_requiresValidSampleType;
- (void)deliverDateRangeDictionary:(struct NSDictionary *)arg1 forQuery:(id)arg2;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

