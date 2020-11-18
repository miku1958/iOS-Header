//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIAlertActionViewRepresentation_Internal-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UIImageView, UILabel;
@protocol UIAlertControllerBackgroundView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate, UIAlertActionViewRepresentation_Internal>
{
    BOOL _highlighted;
    NSLayoutConstraint *_minimumHeightConstraint;
    UIView *labelContainerView;
    NSLayoutConstraint *_labelContainerLeadingConstraint;
    NSLayoutConstraint *_labelContainerTrailingConstraint;
    NSLayoutConstraint *_labelContainerCenterXConstraint;
    NSLayoutConstraint *_labelContainerLeadingPinConstraint;
    NSLayoutConstraint *_labelContainerTrailingPinConstraint;
    UILabel *label;
    UILabel *descriptiveLabel;
    UIImageView *imageView;
    UIImageView *checkView;
    UIView<UIAlertControllerBackgroundView> *backgroundView;
    NSMutableArray *havingDescriptiveLabelConstraints;
    NSMutableArray *notHavingDescriptiveLabelConstraints;
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToLabelLeadingLabelConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToContainerCenterConstraint;
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_labelCenterLeadingConstraint;
    NSLayoutConstraint *_marginToImageConstraint;
    NSLayoutConstraint *_checkToMarginConstraint;
    NSLayoutConstraint *_imageViewTopConstraint;
    NSLayoutConstraint *_imageViewBottomConstraint;
    NSMutableArray *_contentViewControllerConstraints;
    UIView *_contentViewControllerContainerView;
    UIAlertAction *_action;
    UIAlertControllerVisualStyle *_visualStyle;
    id highlightTarget;
    SEL highlightAction;
    BOOL _hasDescriptiveText;
    BOOL _discrete;
    UIAlertController *_alertController;
}

@property (copy, nonatomic) UIAlertAction *action;
@property (weak, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (readonly) double currentDescriptiveLabelTextWidth;
@property (readonly) double currentLabelTextWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL discrete; // @synthesize discrete=_discrete;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (strong) NSLayoutConstraint *labelContainerCenterXConstraint; // @synthesize labelContainerCenterXConstraint=_labelContainerCenterXConstraint;
@property (strong) NSLayoutConstraint *labelContainerLeadingPinConstraint; // @synthesize labelContainerLeadingPinConstraint=_labelContainerLeadingPinConstraint;
@property (strong) NSLayoutConstraint *labelContainerTrailingPinConstraint; // @synthesize labelContainerTrailingPinConstraint=_labelContainerTrailingPinConstraint;
@property (readonly) Class superclass;
@property (readonly) UILabel *titleLabel; // @synthesize titleLabel=label;
@property (weak, nonatomic) UIAlertControllerVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;

- (void).cxx_destruct;
- (void)_action:(id)arg1 changedToBePreferred:(BOOL)arg2;
- (void)_action:(id)arg1 changedToChecked:(BOOL)arg2;
- (void)_action:(id)arg1 changedToEnabled:(BOOL)arg2;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_buildConstraints;
- (void)_buildHavingDescriptiveLabelConstraints;
- (void)_buildNotHavingDescriptiveLabelConstraints;
- (BOOL)_buttonsShouldShowPressedState:(id)arg1;
- (id)_computedTintColor;
- (void)_contentSizeChanged;
- (id)_descriptiveFont;
- (long long)_effectiveTitleTextAlignment;
- (double)_minimumLabelScaleFactor;
- (void)_prepareConstraintsForDescriptiveText:(BOOL)arg1;
- (long long)_pressTypeForBackGesture;
- (long long)_pressTypeForSelectGesture;
- (void)_recomputeTextColor;
- (id)_titleFont;
- (id)_touchForEvent:(id)arg1;
- (void)_updateBackgroundView;
- (void)_updateContentViewControllerContainerViewConstraints;
- (void)_updateFontSize;
- (void)_updateHavingDescriptiveLabelConstraints;
- (void)_updateHighlightTransform:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateImageMargins;
- (void)_updateLabelContainerConstraints;
- (void)_updateMinimumHeight;
- (void)_updateStyle;
- (void)_updateTextAlignmentForDescriptiveText:(BOOL)arg1 titleTextAlignment:(long long)arg2;
- (void)applyMetrics:(id)arg1;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void)focusedViewDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlightTarget:(id)arg1 action:(SEL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)tintColor;
- (void)tintColorDidChange;

@end
