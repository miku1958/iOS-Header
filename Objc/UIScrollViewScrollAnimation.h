//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAnimation.h>

__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation
{
    struct CGPoint _originalOffset;
    struct CGPoint _targetOffset;
    double _accuracy;
    BOOL _adjustsForContentOffsetDelta;
}

- (void)adjustForContentOffsetDelta:(struct CGPoint)arg1;
- (void)dealloc;
- (void)setProgress:(float)arg1;

@end
