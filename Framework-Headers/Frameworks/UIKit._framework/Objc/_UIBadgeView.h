//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIBadgeView : UIView
{
    UIView *_value;
    UIView *_background;
    UIView *_alternate;
}

- (void).cxx_destruct;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_updateBackgroundBlinks:(BOOL)arg1;
- (void)_updateLabelFont;
- (id)initWithValue:(id)arg1 blinks:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setBlinks:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
