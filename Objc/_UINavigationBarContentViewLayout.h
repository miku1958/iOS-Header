//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, UIBarButtonItemGroup, UILabel, UILayoutGuide, UIView, _UIBarButtonItemData, _UIButtonBar, _UIButtonBarButton, _UINavigationBarContentView, _UITAMICAdaptorView;
@protocol _UINavigationBarAugmentedTitleView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentViewLayout : NSObject
{
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    NSLayoutConstraint *_backButtonToLeadingBarSpacer;
    NSLayoutConstraint *_leadingBarToTitleSpacer;
    NSLayoutConstraint *_titleToTrailingBarSpacer;
    NSArray *_layoutGuideConstraints;
    NSArray *_alignmentConstraints;
    NSArray *_heightConstraints;
    NSArray *_backButtonConstraints;
    NSLayoutConstraint *_backButtonMinimumWidthConstraint;
    NSLayoutConstraint *_backButtonMaximumWidthConstraint;
    NSArray *_leadingBarConstraints;
    NSArray *_titleViewConstraints;
    NSArray *_augmentedTitleViewContraints;
    NSArray *_trailingBarConstraints;
    UIBarButtonItemGroup *_leadingBarGroup;
    UIBarButtonItemGroup *_trailingBarGroup;
    UIView *_leadingBarSnapshot;
    UIView *_trailingBarSnapshot;
    UIView *_titleViewSnapshot;
    UIView *_backButtonSnapshot;
    BOOL _hasFakedBackButton;
    BOOL _active;
    BOOL _keepsSnapshotsInHierarchy;
    _UINavigationBarContentView *_contentView;
    UILayoutGuide *_backButtonGuide;
    UILayoutGuide *_leadingBarGuide;
    UILayoutGuide *_titleViewGuide;
    UILayoutGuide *_trailingBarGuide;
    long long _alignment;
    long long _currentContentSize;
    double _overrideSize;
    double _resolvedSize;
    long long _resolvedAlignment;
    _UIButtonBarButton *_backButton;
    double _minimumBackButtonWidth;
    double _maximumBackButtonWidth;
    UILabel *_inlineTitleView;
    double _inlineTitleViewAlpha;
    UIView *_titleView;
    _UITAMICAdaptorView *_titleViewWrapperView;
    UIView<_UINavigationBarAugmentedTitleView> *_augmentedTitleView;
    double _largeTitleHeight;
    _UIButtonBar *_leadingBar;
    _UIButtonBar *_trailingBar;
    _UIBarButtonItemData *_plainItemAppearance;
    _UIBarButtonItemData *_doneItemAppearance;
    _UIBarButtonItemData *_backButtonAppearance;
    struct UIOffset _titlePositionAdjustment;
    CDStruct_ef18196a _largeTitleHeightRange;
    struct NSDirectionalEdgeInsets _layoutMargins;
}

@property (nonatomic) BOOL active; // @synthesize active=_active;
@property (nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property (strong, nonatomic) UIView<_UINavigationBarAugmentedTitleView> *augmentedTitleView; // @synthesize augmentedTitleView=_augmentedTitleView;
@property (strong, nonatomic) _UIButtonBarButton *backButton; // @synthesize backButton=_backButton;
@property (copy, nonatomic) _UIBarButtonItemData *backButtonAppearance; // @synthesize backButtonAppearance=_backButtonAppearance;
@property (readonly, nonatomic) UILayoutGuide *backButtonGuide; // @synthesize backButtonGuide=_backButtonGuide;
@property (readonly, nonatomic) UIView *backButtonSnapshot; // @synthesize backButtonSnapshot=_backButtonSnapshot;
@property (readonly, nonatomic) double baseHeight;
@property (readonly, nonatomic) double baselineOffsetFromTop;
@property (readonly, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) long long currentContentSize; // @synthesize currentContentSize=_currentContentSize;
@property (readonly, nonatomic) double currentHeight;
@property (copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property (readonly, nonatomic) UIView *effectiveTitleView;
@property (nonatomic) BOOL hasFakedBackButton; // @synthesize hasFakedBackButton=_hasFakedBackButton;
@property (strong, nonatomic) UILabel *inlineTitleView; // @synthesize inlineTitleView=_inlineTitleView;
@property (nonatomic) double inlineTitleViewAlpha; // @synthesize inlineTitleViewAlpha=_inlineTitleViewAlpha;
@property (nonatomic) BOOL keepsSnapshotsInHierarchy; // @synthesize keepsSnapshotsInHierarchy=_keepsSnapshotsInHierarchy;
@property (nonatomic) double largeTitleHeight; // @synthesize largeTitleHeight=_largeTitleHeight;
@property (nonatomic) CDStruct_c3b9c2ee largeTitleHeightRange; // @synthesize largeTitleHeightRange=_largeTitleHeightRange;
@property (nonatomic) struct NSDirectionalEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property (strong, nonatomic) _UIButtonBar *leadingBar; // @synthesize leadingBar=_leadingBar;
@property (readonly, nonatomic) UILayoutGuide *leadingBarGuide; // @synthesize leadingBarGuide=_leadingBarGuide;
@property (strong, nonatomic) NSArray *leadingBarItems;
@property (readonly, nonatomic) UIView *leadingBarSnapshot; // @synthesize leadingBarSnapshot=_leadingBarSnapshot;
@property (nonatomic) double maximumBackButtonWidth; // @synthesize maximumBackButtonWidth=_maximumBackButtonWidth;
@property (nonatomic) double minimumBackButtonWidth; // @synthesize minimumBackButtonWidth=_minimumBackButtonWidth;
@property (nonatomic) double overrideSize; // @synthesize overrideSize=_overrideSize;
@property (copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property (readonly, nonatomic) long long resolvedAlignment; // @synthesize resolvedAlignment=_resolvedAlignment;
@property (readonly, nonatomic) double resolvedSize; // @synthesize resolvedSize=_resolvedSize;
@property (nonatomic) struct UIOffset titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property (strong, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property (readonly, nonatomic) UILayoutGuide *titleViewGuide; // @synthesize titleViewGuide=_titleViewGuide;
@property (readonly, nonatomic) UIView *titleViewSnapshot; // @synthesize titleViewSnapshot=_titleViewSnapshot;
@property (readonly, nonatomic) _UITAMICAdaptorView *titleViewWrapperView; // @synthesize titleViewWrapperView=_titleViewWrapperView;
@property (strong, nonatomic) _UIButtonBar *trailingBar; // @synthesize trailingBar=_trailingBar;
@property (readonly, nonatomic) UILayoutGuide *trailingBarGuide; // @synthesize trailingBarGuide=_trailingBarGuide;
@property (strong, nonatomic) NSArray *trailingBarItems;
@property (readonly, nonatomic) UIView *trailingBarSnapshot; // @synthesize trailingBarSnapshot=_trailingBarSnapshot;

- (void).cxx_destruct;
- (void)_activateAllConstraints;
- (void)_activateConstraintsAndUpdateViewOrderIfNecessary:(id)arg1;
- (double)_contentHeight;
- (void)_deactivateAllConstraints;
- (void)_deactivateConstraintsIfNecessary:(id)arg1;
- (void)_disableLayoutFlushing:(BOOL)arg1;
- (double)_inlineTitleBaselineOffset;
- (void)_prepareTitleViewAndWrapIfNecessary;
- (void)_updateAlignmentConstraints;
- (void)_updateAugmentedTitleViewConstraints;
- (void)_updateAugmentedTitleViewLayout;
- (void)_updateBackButtonConstraints;
- (void)_updateBackButtonWidthConstraintsAndActivateIfNecessary;
- (void)_updateHeightConstraints;
- (void)_updateLeadingBarConstraints;
- (void)_updateMarginConstraints;
- (void)_updateSubviewOrder;
- (void)_updateTitleViewConstraints;
- (void)_updateTrailingBarConstraints;
- (void)cleanupAfterLayoutTransitionCompleted;
- (id)description;
- (void)freeze;
- (id)initWithContentView:(id)arg1;
- (void)removeAllSnapshots;
- (void)removeContent;
- (void)replaceBackButtonWithSnapshot;
- (void)replaceLeadingBarWithSnapshot;
- (void)replaceTitleViewWithSnapshot;
- (void)replaceTrailingBarWithSnapshot;
- (void)setBackButtonHidden:(BOOL)arg1 titleLabelHidden:(BOOL)arg2 titleViewHidden:(BOOL)arg3 barsHidden:(BOOL)arg4;
- (void)setContentHidden:(BOOL)arg1;
- (void)unfreeze;
- (void)updateAlphas;
- (void)updateAugmentedTitleViewBackButtonConstraints;
- (void)updateAugmentedTitleViewHeight;
- (void)updateAugmentedTitleViewLayout;
- (void)updateSpacingConstraints;
- (void)updateTitleHeight;

@end

