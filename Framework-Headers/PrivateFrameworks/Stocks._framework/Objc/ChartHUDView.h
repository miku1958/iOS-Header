//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, PricePopoverBar, StockChartView, StockGraphView, StocksTapDragGestureRecognizer, UILabel;

@interface ChartHUDView : UIView
{
    UILabel *_leftDateLabel;
    UILabel *_centeredLabel;
    UILabel *_rightDateLabel;
    long long _interval;
    NSMutableSet *_inactiveTouchInfoSet;
    NSMutableSet *_touchInfoSet;
    BOOL _forceTouchUpdate;
    PricePopoverBar *_pricePopoverBar;
    StocksTapDragGestureRecognizer *_tapDragGesture;
    BOOL _enabled;
    BOOL _overlayHidden;
    StockChartView *_chartView;
    StockGraphView *_graphView;
    double _barHeight;
}

@property (nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property (weak, nonatomic) StockChartView *chartView; // @synthesize chartView=_chartView;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) StockGraphView *graphView; // @synthesize graphView=_graphView;
@property (nonatomic, getter=isOverlayHidden) BOOL overlayHidden; // @synthesize overlayHidden=_overlayHidden;

+ (id)_dateRangeSeparatorString;
+ (void)initializeDateFormattersIfNeededForInterval:(long long)arg1 withTimeZone:(id)arg2;
+ (id)newHUDLabel;
+ (id)stringForTimeIntervalSince1970:(double)arg1 withInterval:(long long)arg2 isDouble:(BOOL)arg3 isLeft:(BOOL)arg4;
- (void).cxx_destruct;
- (void)_showHUD;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isTrackingTouches;
- (void)layoutSubviews;
- (void)resetLocale;
- (void)resizeSelectedClipViewsIfNeeded;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelectedInterval:(long long)arg1 timeZone:(id)arg2;
- (void)setShowingTracking:(BOOL)arg1 withTouchInfo:(id)arg2 animated:(BOOL)arg3;
- (void)tapDragGestureChanged:(id)arg1;

@end

