//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKGraphView, UIView;
@protocol HKInteractiveChartCurrentValueViewCallbacks;

@protocol HKInteractiveChartCurrentValueViewHandler <NSObject>
- (UIView *)makeCurrentValueView;
- (void)setCurrentValueViewCallbacks:(id<HKInteractiveChartCurrentValueViewCallbacks>)arg1;
- (void)updateCurrentValueView:(UIView *)arg1 graphView:(HKGraphView *)arg2 timeScope:(long long)arg3;
@end
