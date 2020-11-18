//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, _UIBackdropView;

@interface _UIContentUnavailableView : UIView
{
    unsigned long long _style;
    NSString *_title;
    _UIBackdropView *_backdrop;
    UIView *_containerView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *titleToMessageConstraint;
    NSLayoutConstraint *messageToButtonConstraint;
    NSLayoutConstraint *buttonHeightConstraint;
    UIView *_fromSnapshot;
    UIView *_toSnapshot;
    struct CGSize _fromSnapshotSize;
    NSMutableArray *_containerViewContraints;
    NSString *_message;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonAction;
    unsigned long long _vibrantOptions;
}

@property (copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property (copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) unsigned long long vibrantOptions; // @synthesize vibrantOptions=_vibrantOptions;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (double)_buttonAlpha;
- (id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2;
- (id)_buttonFont;
- (struct CGSize)_buttonSize;
- (id)_buttonTextStyle;
- (double)_buttonVerticalSpacing;
- (id)_flatTextColor;
- (BOOL)_hasVibrantButton;
- (BOOL)_hasVibrantText;
- (double)_labelAlpha;
- (double)_labelVerticalSpacing;
- (id)_messageTextStyle;
- (void)_rebuildConstraints;
- (id)_titleFont;
- (void)_updateForCurrentContentSizeCategory;
- (void)_updateViewHierarchy;
- (id)_vibrantBaseColor;
- (void)cleanupLingeringRotationState;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(BOOL)arg4;
- (void)layoutSubviews;
- (id)preferredFocusedView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;

@end

