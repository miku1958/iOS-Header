//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIVisualEffectView;
@protocol SXFullscreenNavigationBarViewDelegate;

@interface SXFullscreenNavigationBarView : UIView
{
    BOOL _expanded;
    id<SXFullscreenNavigationBarViewDelegate> _delegate;
    UIVisualEffectView *_backgroundView;
    UIButton *_button;
}

@property (readonly, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property (weak, nonatomic) id<SXFullscreenNavigationBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL expanded; // @synthesize expanded=_expanded;

- (void).cxx_destruct;
- (void)createBackgroundView;
- (void)createDoneButton;
- (void)didMoveToSuperview;
- (void)doneButtonPressed:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateFrameAnimated:(BOOL)arg1;

@end

