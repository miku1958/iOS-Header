//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class NSArray, NSUUID;

@protocol HKActivitySummaryQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverActivitySummaries:(NSArray *)arg1 isFinalBatch:(BOOL)arg2 clearPendingBatches:(BOOL)arg3 queryUUID:(NSUUID *)arg4;
@end
