//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView;
@protocol PLSlalomRegionEditorDelegate;

@interface PLSlalomRegionEditor : UIControl
{
    UIImageView *_startHandleView;
    UIImageView *_endHandleView;
    UIImageView *_trackImageView;
    UIImageView *_trackSnapshotView;
    BOOL _draggingStart;
    BOOL _draggingEnd;
    double _touchOffset;
    BOOL _zoomed;
    BOOL _trackingZoom;
    struct CGPoint _touchLocationWhenTrackingZoomBegan;
    BOOL _forceLayout;
    double _zoomMinValue;
    double _zoomMaxValue;
    BOOL _zoomAnimating;
    id<PLSlalomRegionEditorDelegate> _delegate;
    double _trimHandleWidth;
    unsigned long long _regionEditorStyle;
    double _minValue;
    double _maxValue;
    double _startValue;
    double _endValue;
    double _zoomDelay;
    struct UIEdgeInsets _trackInsets;
}

@property (nonatomic) id<PLSlalomRegionEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) struct CGRect endHandleFrame;
@property (nonatomic) double endValue; // @synthesize endValue=_endValue;
@property (nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property (nonatomic) double minValue; // @synthesize minValue=_minValue;
@property (nonatomic) unsigned long long regionEditorStyle; // @synthesize regionEditorStyle=_regionEditorStyle;
@property (readonly, nonatomic) struct CGRect startHandleFrame;
@property (nonatomic) double startValue; // @synthesize startValue=_startValue;
@property (nonatomic) struct UIEdgeInsets trackInsets; // @synthesize trackInsets=_trackInsets;
@property (nonatomic) double trimHandleWidth; // @synthesize trimHandleWidth=_trimHandleWidth;
@property (nonatomic, getter=isZoomAnimating, setter=setZoomAnimating:) BOOL zoomAnimating; // @synthesize zoomAnimating=_zoomAnimating;
@property (nonatomic) double zoomDelay; // @synthesize zoomDelay=_zoomDelay;

- (void).cxx_destruct;
- (void)_beginTrackingZoomWithTouch:(id)arg1;
- (void)_cancelTrackingZoom;
- (void)_cancelZoom;
- (void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1;
- (void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4;
- (struct CGRect)_handleFrameForValue:(double)arg1 isStart:(BOOL)arg2;
- (id)_handleImage;
- (id)_handleTintColor;
- (BOOL)_isTouch:(id)arg1 inHandleIsStart:(BOOL)arg2 outTouchOffset:(double *)arg3;
- (BOOL)_isZoomed;
- (void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1;
- (id)_tickColor;
- (id)_trackColor;
- (struct CGRect)_trackFrame;
- (struct CGRect)_trackFrameNoZoom;
- (id)_trackImageForZoom:(BOOL)arg1;
- (double)_trackScale;
- (double)_trimHandleWidth;
- (void)_updateSlidersWithTouch:(id)arg1;
- (void)_updateTrack;
- (double)_valueFromEndHandleFrame:(struct CGRect)arg1;
- (double)_valueFromHandleFrame:(struct CGRect)arg1 isStart:(BOOL)arg2;
- (double)_valueFromStartHandleFrame:(struct CGRect)arg1;
- (double)_zoomMaxValue;
- (double)_zoomMinValue;
- (void)_zoomPressWasHeld;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (void)setEndValue:(double)arg1 notify:(BOOL)arg2;
- (void)setStartValue:(double)arg1 notify:(BOOL)arg2;
- (void)setZoomMinValue:(double)arg1 maxValue:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

