//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class NSArray, NSUUID;

@protocol HKLatestSummariesQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverResetSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
- (void)client_deliverSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
- (void)client_deliverUpdatedSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
@end
