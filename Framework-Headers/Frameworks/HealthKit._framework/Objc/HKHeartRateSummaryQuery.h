//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKHeartRateSummaryQueryClientInterface-Protocol.h>

@class NSString;

@interface HKHeartRateSummaryQuery : HKQuery <HKHeartRateSummaryQueryClientInterface>
{
    CDUnknownBlockType _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
- (void).cxx_destruct;
- (void)client_deliverSummary:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end

