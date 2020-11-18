//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSLock, NSTimer;

@interface SUICTickMarkView : UIView
{
    CADisplayLink *_displayLink;
    BOOL _shown;
    long long _currentPreferredFrameRate;
    long long _currentFrame;
    int _animState;
    NSTimer *_safetyTimer;
    BOOL _completionCalled;
    CDUnknownBlockType _completionBlock;
    NSLock *_completionLock;
    long long _fadeInFrames;
    long long _pauseFrames;
    long long _fadeOutFrames;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleSafetyTimer:(id)arg1;
- (struct CGImage *)imageMask:(BOOL)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)setUpDisplayLink;
- (void)startAnimationsForTickMark:(BOOL)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)tearDownDisplayLink;

@end
