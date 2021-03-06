//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSTimer;

@interface SBFBokehWallpaperCircle : CALayer
{
    NSTimer *_lifetimeTimer;
    long long _fillColor;
    BOOL _shouldBlink;
    BOOL _isFading;
    long long _direction;
    double _velocity;
    struct CGRect _originalFrame;
    BOOL _fadingOut;
    BOOL _shouldPause;
    BOOL _isPulsating;
    struct CGRect _superviewBounds;
}

@property (nonatomic, getter=isFadingOut) BOOL fadingOut; // @synthesize fadingOut=_fadingOut;
@property (nonatomic) BOOL isPulsating; // @synthesize isPulsating=_isPulsating;
@property (nonatomic) BOOL shouldPause; // @synthesize shouldPause=_shouldPause;
@property (nonatomic) struct CGRect superviewBounds; // @synthesize superviewBounds=_superviewBounds;

- (void).cxx_destruct;
- (void)_animateInNewCircle;
- (void)_pauseAnimations;
- (void)_resumeAnimations;
- (void)_timerFired;
- (double)desiredOpacity;
- (struct CGPoint)desiredPositionDeltaForX:(double)arg1 y:(double)arg2 lockScreen:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1 fillColor:(long long)arg2;
- (void)prepareForReuse;
- (double)randomOpacity;
- (void)setAnimationsEnabled:(BOOL)arg1;
- (void)setCircleColor:(long long)arg1;
- (void)startPulsatingCircle;

@end

