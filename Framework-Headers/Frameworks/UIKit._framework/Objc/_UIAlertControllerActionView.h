//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIAlertActionViewRepresentation_Internal-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UIImageView, UILabel, _UIAlertControllerActionViewMetrics;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate, UIAlertActionViewRepresentation_Internal>
{
    BOOL _highlighted;
    UIView *_labelContainerView;
    UILabel *_label;
    NSLayoutConstraint *_axLabelContainerWidthConstraint;
    NSLayoutConstraint *_labelContainerLeadingConstraint;
    NSLayoutConstraint *_labelContainerTrailingConstraint;
    NSLayoutConstraint *_labelContainerCenterXConstraint;
    NSLayoutConstraint *_labelContainerLeadingPinConstraint;
    NSLayoutConstraint *_labelContainerTrailingPinConstraint;
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_labelCenterLeadingConstraint;
    UIView *_contentViewControllerContainerView;
    NSArray *_contentViewControllerConstraints;
    UILabel *_descriptiveLabel;
    NSArray *_havingDescriptiveLabelConstraints;
    NSArray *_notHavingDescriptiveLabelConstraints;
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToLabelLeadingLabelConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToContainerCenterConstraint;
    UIImageView *_checkView;
    NSLayoutConstraint *_checkToMarginConstraint;
    UIImageView *_imageView;
    NSLayoutConstraint *_marginToImageConstraint;
    NSLayoutConstraint *_imageViewBaselineOrCenterYConstraint;
    NSLayoutConstraint *_imageViewTopConstraint;
    NSLayoutConstraint *_imageViewBottomConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    UIAlertAction *_action;
    UIAlertControllerVisualStyle *_visualStyle;
    _UIAlertControllerActionViewMetrics *_metrics;
    BOOL _hasDescriptiveText;
    double _axEnforcedWidth;
    UIAlertController *_alertController;
}

@property (copy, nonatomic) UIAlertAction *action;
@property (weak, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (readonly) double currentDescriptiveLabelTextWidth;
@property (readonly) double currentLabelTextWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (strong) NSLayoutConstraint *labelContainerCenterXConstraint; // @synthesize labelContainerCenterXConstraint=_labelContainerCenterXConstraint;
@property (strong) NSLayoutConstraint *labelContainerLeadingPinConstraint; // @synthesize labelContainerLeadingPinConstraint=_labelContainerLeadingPinConstraint;
@property (strong) NSLayoutConstraint *labelContainerTrailingPinConstraint; // @synthesize labelContainerTrailingPinConstraint=_labelContainerTrailingPinConstraint;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIAlertControllerVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;

- (void).cxx_destruct;
- (void)_action:(id)arg1 changedToBePreferred:(BOOL)arg2;
- (void)_action:(id)arg1 changedToChecked:(BOOL)arg2;
- (void)_action:(id)arg1 changedToEnabled:(BOOL)arg2;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_buildCheckViewConstraints;
- (void)_buildConstraints;
- (void)_buildContentViewControllerContainerConstraints;
- (void)_buildHavingDescriptiveLabelConstraints;
- (void)_buildImageViewConstraints;
- (void)_buildNotHavingDescriptiveLabelConstraints;
- (void)_contentSizeChanged;
- (long long)_effectiveTitleTextAlignment;
- (id)_interfaceActionViewState;
- (void)_loadCheckView;
- (void)_loadContentViewControllerContainerViewIfNecessary;
- (void)_loadContentViewControllerView;
- (void)_loadDescriptiveLabel;
- (void)_loadImageView;
- (void)_prepareConstraintsForHavingDescriptiveText:(BOOL)arg1;
- (void)_prepareConstraintsForImage:(id)arg1;
- (void)_recomputeColors;
- (void)_removeContentViewControllerContainerViewSubviews;
- (void)_updateCheckImageView;
- (void)_updateContentViewControllerContainerViewConstraints;
- (void)_updateDescriptiveText;
- (void)_updateHavingDescriptiveLabelConstraints;
- (void)_updateImageMargins;
- (void)_updateImageView;
- (void)_updateImageViewAttributes;
- (void)_updateLabelAttributes;
- (void)_updateLabelContainerConstraints;
- (void)_updateMinimumHeight;
- (void)_updateStyle;
- (void)_updateTextAlignmentForHavingDescriptiveText:(BOOL)arg1 titleTextAlignment:(long long)arg2;
- (void)applyMetrics:(id)arg1;
- (void)dealloc;
- (BOOL)hasActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;
- (BOOL)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)underlyingInterfaceActionRepresentationDidChange;
- (void)updateHeightUsingAXEnforcedWidth:(double)arg1;

@end

