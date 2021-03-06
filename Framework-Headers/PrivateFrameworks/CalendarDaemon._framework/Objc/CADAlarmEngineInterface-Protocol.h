//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSString;

@protocol CADAlarmEngineInterface
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(NSDate *)arg1 toEnd:(NSDate *)arg2 inCalendars:(NSArray *)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseGetAlarmWithUUID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(void (^)(int, NSArray *))arg1;
@end

