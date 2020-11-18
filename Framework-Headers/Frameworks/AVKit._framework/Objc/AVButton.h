//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface AVButton : UIButton
{
    struct UIEdgeInsets _hitRectInsets;
}

@property (nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;

- (BOOL)_drawingAsSelected;
- (void)_updateForStateChangeAnimated:(BOOL)arg1;
- (void)_updateSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (void)didMoveToSuperview;
- (struct CGRect)hitRect;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end

