//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKQuantitySample;

@protocol HKQuantitySeriesDataProviderDelegate <NSObject>

@optional
- (void)reloadSampleData;
- (void)sampleDidChange:(HKQuantitySample *)arg1;
@end
