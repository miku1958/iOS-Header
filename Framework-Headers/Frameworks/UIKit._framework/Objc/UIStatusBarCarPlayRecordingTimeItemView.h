//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@class _UIStatusBarRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView
{
    _UIStatusBarRoundedCornerView *_pillView;
}

- (void).cxx_destruct;
- (struct CGRect)_pillFrame;
- (void)_updatePillFrame;
- (BOOL)allowsUserInteraction;
- (long long)buttonType;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (double)extraRightPadding;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)movedToSuperview:(id)arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)showsTouchWhenHighlighted;
- (long long)textStyle;
- (BOOL)usesAdvancedActions;

@end

