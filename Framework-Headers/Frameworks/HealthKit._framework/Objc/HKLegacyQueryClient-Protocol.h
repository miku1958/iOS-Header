//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKActivityCache, NSArray, NSUUID;

@protocol HKLegacyQueryClient <HKQueryClientInterface>
- (void)deliverCurrentActivityCache:(HKActivityCache *)arg1 moveStatistics:(NSArray *)arg2 exerciseStatistics:(NSArray *)arg3 standHoursInfo:(NSArray *)arg4 queryUUID:(NSUUID *)arg5;
@end

