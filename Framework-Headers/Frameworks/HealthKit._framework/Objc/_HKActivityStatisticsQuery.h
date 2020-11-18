//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKActivityStatisticsQueryClientInterface-Protocol.h>

@class NSDate, NSDateComponents, NSString;

@interface _HKActivityStatisticsQuery : HKQuery <HKActivityStatisticsQueryClientInterface>
{
    BOOL _deliveredInitial;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _initialResultsHandler;
    double _updateInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType initialResultsHandler; // @synthesize initialResultsHandler=_initialResultsHandler;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property (nonatomic, getter=_updateInterval, setter=_setUpdateInterval:) double updateInterval; // @synthesize updateInterval=_updateInterval;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
- (void).cxx_destruct;
- (void)_validateIntervalComponents:(id)arg1;
- (void)client_deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workouts:(id)arg4 query:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 moveIntervalComponents:(id)arg3 exerciseIntervalComponents:(id)arg4 initialResultsHandler:(CDUnknownBlockType)arg5;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
