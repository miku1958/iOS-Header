//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartHealth/NSObject-Protocol.h>

@class HKQuantity, NSDate;

@protocol HDHRCardioFitnessStorePluginServerInterface <NSObject>
- (void)remote_saveCardioFitnessAlertWithValue:(HKQuantity *)arg1 threshold:(HKQuantity *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 options:(unsigned long long)arg5 completion:(void (^)(BOOL, NSError *))arg6;
@end

