//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKMultiTypeQueryCursor, NSArray, NSUUID;

@protocol HKMultiTypeSampleQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverSampleObjects:(NSArray *)arg1 queryCursor:(HKMultiTypeQueryCursor *)arg2 deliverResults:(BOOL)arg3 query:(NSUUID *)arg4;
@end
