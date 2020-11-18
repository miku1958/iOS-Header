//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, NSDate, NSTimer, PXProgressArcLayer;

@interface PXRoundProgressView : UIView
{
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
    long long _style;
    double _progress;
    UIView *__contentView;
    CAShapeLayer *__sliceLayer;
    CAShapeLayer *__circleLayer;
    PXProgressArcLayer *__progressArcLayer;
    CALayer *__irisGlyphLayer;
    double __contentsScale;
}

@property (strong, nonatomic, setter=_setCircleLayer:) CAShapeLayer *_circleLayer; // @synthesize _circleLayer=__circleLayer;
@property (strong, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property (nonatomic, setter=_setContentsScale:) double _contentsScale; // @synthesize _contentsScale=__contentsScale;
@property (strong, nonatomic, setter=_setIrisGlyphLayer:) CALayer *_irisGlyphLayer; // @synthesize _irisGlyphLayer=__irisGlyphLayer;
@property (strong, nonatomic, setter=_setProgressArcLayer:) PXProgressArcLayer *_progressArcLayer; // @synthesize _progressArcLayer=__progressArcLayer;
@property (strong, nonatomic, setter=_setSliceLayer:) CAShapeLayer *_sliceLayer; // @synthesize _sliceLayer=__sliceLayer;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (nonatomic) long long style; // @synthesize style=_style;

+ (double)toRadian:(double)arg1;
- (void).cxx_destruct;
- (void)_recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)_setPieRadius:(double)arg1;
- (void)_updateSublayersContentsScale;
- (void)_updateSubviews;
- (void)_updateUIProgress;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)increaseUIProgress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)resetProgress;
- (void)setInitialIncreaseRatePerFrame:(double)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;

@end

