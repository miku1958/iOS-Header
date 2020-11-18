//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAMediaTimingFunction, NSMutableArray;

@interface TKDownloadIndicatorView : UIView
{
    float _initialAnimatedProgress;
    float _currentAnimatedProgress;
    double _progressAnimationEndTime;
    double _progressAnimationStartTime;
    BOOL _isAnimatingProgress;
    CADisplayLink *_displayLink;
    NSMutableArray *_progressAnimationCompletionHandlers;
    CAMediaTimingFunction *_progressAnimationTimingFunction;
    float _progress;
}

@property (nonatomic) float progress; // @synthesize progress=_progress;

+ (struct CGSize)_intrinsicDownloadIndicatorViewSize;
- (void).cxx_destruct;
- (void)_handleDisplayLinkDidFire:(id)arg1;
- (void)_stopProgressAnimation;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

