//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIAnimation.h>

@interface UIFrameAnimation : UIAnimation
{
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    int _fieldsToChange;
}

- (struct CGRect)endFrame;
- (id)initWithTarget:(id)arg1;
- (void)setEndFrame:(struct CGRect)arg1;
- (void)setProgress:(float)arg1;
- (void)setSignificantRectFields:(int)arg1;
- (void)setStartFrame:(struct CGRect)arg1;

@end

