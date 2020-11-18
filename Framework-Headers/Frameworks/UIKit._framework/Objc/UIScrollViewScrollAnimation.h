//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAnimation.h>

@class CABasicAnimation;

__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation
{
    struct CGPoint _originalOffset;
    struct CGPoint _targetOffset;
    double _accuracy;
    BOOL _adjustsForContentOffsetDelta;
    CABasicAnimation *_customAnimation;
}

- (void).cxx_destruct;
- (void)adjustForContentOffsetDelta:(struct CGPoint)arg1;
- (void)dealloc;
- (float)progressForFraction:(float)arg1;
- (void)setProgress:(float)arg1;

@end

