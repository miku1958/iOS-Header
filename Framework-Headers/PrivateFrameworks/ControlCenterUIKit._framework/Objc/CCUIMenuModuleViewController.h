//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

#import <ControlCenterUIKit/CCUIContentModuleContentViewController-Protocol.h>
#import <ControlCenterUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class CCUIContentModuleContext, CCUIMenuModuleItemView, MTMaterialView, MTVisualStylingProvider, NSMutableArray, NSMutableDictionary, NSString, UIActivityIndicatorView, UILabel, UILongPressGestureRecognizer, UIScrollView, UISelectionFeedbackGenerator, UIStackView, UIView, UIViewPropertyAnimator;

@interface CCUIMenuModuleViewController : CCUIButtonModuleViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_transformView;
    UIView *_headerSeparatorView;
    UIView *_footerSeparatorView;
    MTMaterialView *_platterMaterialView;
    MTVisualStylingProvider *_visualStylingProvider;
    UIStackView *_menuItemsContainer;
    NSMutableArray *_menuItems;
    NSMutableDictionary *_identiferToActivityIndicatorView;
    UIScrollView *_contentScrollView;
    UIView *_darkeningBackgroundView;
    UIActivityIndicatorView *_busyIndicatorView;
    UILongPressGestureRecognizer *_pressGestureRecognizer;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    BOOL _allowsMenuInteraction;
    BOOL _ignoreMenuItemAtTouchLocationAfterExpanded;
    struct CGPoint _touchLocationToIgnore;
    CCUIMenuModuleItemView *_footerButtonView;
    BOOL _shouldShowFooterButton;
    UIView *_customContentView;
    BOOL _customContentViewScrolls;
    BOOL _forceLimitContentSizeCategory;
    BOOL _busy;
    BOOL _shouldProvideOwnPlatter;
    BOOL _useTrailingCheckmarkLayout;
    BOOL _useTrailingInset;
    BOOL _useTallLayout;
    BOOL _hideGlyphInHeader;
    UIView *_contentView;
    NSString *_subtitle;
    unsigned long long _minimumMenuItems;
    double _visibleMenuItems;
    unsigned long long _indentation;
    CCUIContentModuleContext *_contentModuleContext;
}

@property (readonly, nonatomic) unsigned long long actionsCount;
@property (nonatomic, getter=isBusy) BOOL busy; // @synthesize busy=_busy;
@property (weak, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasFooterButton;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double headerHeight;
@property (nonatomic) BOOL hideGlyphInHeader; // @synthesize hideGlyphInHeader=_hideGlyphInHeader;
@property (nonatomic) unsigned long long indentation; // @synthesize indentation=_indentation;
@property (readonly, nonatomic) unsigned long long menuItemCount;
@property (nonatomic) unsigned long long minimumMenuItems; // @synthesize minimumMenuItems=_minimumMenuItems;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (nonatomic) BOOL shouldProvideOwnPlatter; // @synthesize shouldProvideOwnPlatter=_shouldProvideOwnPlatter;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (nonatomic) BOOL useTallLayout; // @synthesize useTallLayout=_useTallLayout;
@property (nonatomic) BOOL useTrailingCheckmarkLayout; // @synthesize useTrailingCheckmarkLayout=_useTrailingCheckmarkLayout;
@property (nonatomic) BOOL useTrailingInset; // @synthesize useTrailingInset=_useTrailingInset;
@property (nonatomic) double visibleMenuItems; // @synthesize visibleMenuItems=_visibleMenuItems;

+ (id)checkmarkImageForPreferredContentSizeCategory:(id)arg1;
- (void).cxx_destruct;
- (double)_aggregateModuleHeight;
- (id)_busyIndicatorView;
- (BOOL)_canShowWhileLocked;
- (double)_contentScaleForSize:(struct CGSize)arg1;
- (void)_contentSizeCategoryDidChange;
- (double)_defaultMenuItemHeight;
- (double)_desiredExpandedHeight;
- (void)_fadeViewsForExpandedState:(BOOL)arg1;
- (double)_footerHeight;
- (void)_handleActionTapped:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_layoutBusyIndicatorForSize:(struct CGSize)arg1;
- (void)_layoutContentViewForSize:(struct CGSize)arg1;
- (void)_layoutFooterButtonForSize:(struct CGSize)arg1;
- (void)_layoutFooterSeparatorForSize:(struct CGSize)arg1;
- (void)_layoutGlyphViewForSize:(struct CGSize)arg1;
- (void)_layoutHeaderSeparatorForSize:(struct CGSize)arg1;
- (void)_layoutSubtitleLabelForSize:(struct CGSize)arg1;
- (void)_layoutTitleLabelForSize:(struct CGSize)arg1;
- (void)_layoutTransformViewForSize:(struct CGSize)arg1;
- (void)_layoutViewSubviews;
- (id)_leadingViewForMenuItem:(id)arg1;
- (double)_maximumHeight;
- (id)_menuItemFromPlaceholderIndex:(unsigned long long)arg1;
- (double)_menuItemsHeightForWidth:(double)arg1;
- (id)_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
- (double)_separatorHeight;
- (void)_setForceLimitContentSizeCategory:(BOOL)arg1;
- (void)_setMenuItems:(id)arg1;
- (void)_setRootViewClipsToBounds:(BOOL)arg1;
- (void)_setTransformViewClipsToBounds:(BOOL)arg1;
- (void)_setView:(id)arg1 clipsToBounds:(BOOL)arg2;
- (void)_setupSubtitleLabel;
- (void)_setupTitleLabel;
- (BOOL)_shouldHideGlyphForLimitedContentSizeCategory;
- (BOOL)_shouldLimitContentSizeCategory;
- (BOOL)_shouldShowFooterChin;
- (BOOL)_shouldShowFooterSeparator;
- (id)_subtitleFont;
- (id)_titleFont;
- (double)_titleWidthForContainerWidth:(double)arg1;
- (BOOL)_toggleSelectionForMenuItem:(id)arg1;
- (id)_trailingViewForMenuItem:(id)arg1;
- (void)_updateLeadingAndTrailingViews;
- (void)_updateMenuItemsSeparatorVisiblity;
- (void)_updatePreferredContentSize;
- (void)_updateSubtitleFont;
- (void)_updateTitleFont;
- (void)addActionWithTitle:(id)arg1 glyph:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addActionWithTitle:(id)arg1 subtitle:(id)arg2 glyph:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)contentModuleWillTransitionToExpandedContentMode:(BOOL)arg1;
- (void)didTransitionToExpandedContentMode:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)hasGlyph;
- (double)headerHeightForWidth:(double)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)leadingImageForMenuItem:(id)arg1;
- (id)leadingViewForMenuItem:(id)arg1;
- (id)menuItemForIdentifier:(id)arg1;
- (double)preferredExpandedContentHeightWithWidth:(double)arg1;
- (void)removeAllActions;
- (void)removeFooterButton;
- (void)scrollToTop:(BOOL)arg1;
- (double)scrollViewContentHeightForWidth:(double)arg1;
- (void)setCustomContentView:(id)arg1;
- (void)setFooterButtonTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setUseIndentedLayout:(BOOL)arg1;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (id)trailingImageForMenuItem:(id)arg1;
- (id)trailingViewForMenuItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (id)viewForTouchContinuation;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToExpandedContentMode:(BOOL)arg1;

@end
