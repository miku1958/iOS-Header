//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSDate, NSTimer, PLProgressArcLayer;

@interface PLRoundProgressView : UIView
{
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
    long long _style;
    double _progress;
    PLProgressArcLayer *__progressArcLayer;
    double __contentsScale;
}

@property (nonatomic, setter=_setContentsScale:) double _contentsScale; // @synthesize _contentsScale=__contentsScale;
@property (strong, nonatomic, setter=_setProgressArcLayer:) PLProgressArcLayer *_progressArcLayer; // @synthesize _progressArcLayer=__progressArcLayer;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;

- (void)_setupSubviews;
- (void)_updateSublayersContentsScale;
- (void)_updateUIProgress;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)increaseUIProgress:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)resetProgress;
- (void)setInitialIncreaseRatePerFrame:(double)arg1;
- (void)setPieRadius:(double)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (double)toRadian:(double)arg1;

@end

