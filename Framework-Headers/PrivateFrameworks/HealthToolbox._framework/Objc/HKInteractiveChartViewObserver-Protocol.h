//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/NSObject-Protocol.h>

@class HKValueRange, NSArray;

@protocol HKInteractiveChartViewObserver <NSObject>

@optional
- (void)configureDisplayTypes:(NSArray *)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(HKValueRange *)arg3;
- (void)didUpdateSeriesWithNewValueRange:(HKValueRange *)arg1;
- (void)didUpdateVisibleValueRange:(HKValueRange *)arg1 changeContext:(long long)arg2;
@end

