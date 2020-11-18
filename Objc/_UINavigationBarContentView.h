//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIBarContentView.h>

#import <UIKit/_UIBarButtonItemViewOwner-Protocol.h>
#import <UIKit/_UINavigationBarTitleViewDataSource-Protocol.h>
#import <UIKit/_UINavigationBarTransitionContextParticipant-Protocol.h>

@class NSArray, NSDictionary, NSString, UIBarButtonItem, UIColor, UIImage, UIView, _UINavigationBarContentViewLayout, _UINavigationBarTransitionContext;
@protocol _UINavigationBarContentViewDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationBarContentView : _UIBarContentView <_UIBarButtonItemViewOwner, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant>
{
    _UINavigationBarContentViewLayout *_layout;
    _UINavigationBarTransitionContext *_transitionContext;
    BOOL _deferResolvedSizeChange;
    BOOL _outstandingDeferredResolvedSizeChange;
    UIImage *_backIndicatorImage;
    BOOL _needsBackButtonUpdate;
    double _backButtonMargin;
    double _backButtonMaximumWidth;
    BOOL _hitTestingExtensionsAreValid;
    BOOL _backButtonHidden;
    BOOL _leadingItemsSupplementBackItem;
    long long _barMetrics;
    id<_UINavigationBarContentViewDelegate> _delegate;
    UIBarButtonItem *_backButtonItem;
    NSArray *_leadingBarButtonItems;
    NSArray *_trailingBarButtonItems;
    NSString *_title;
    UIView *_titleView;
    double _titleViewAlpha;
    NSDictionary *_titleAttributes;
    double _titleVerticalPositionAdjustment;
    UIColor *_textColor;
    double _overrideSize;
    long long _requestedContentSize;
}

@property (readonly, nonatomic) UIView *accessibilityBackButtonView;
@property (readonly, nonatomic) UIView *accessibilityTitleView;
@property (nonatomic) BOOL backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property (strong, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property (nonatomic) double backButtonMargin;
@property (nonatomic, setter=_setBackButtonMaximumWidth:) double backButtonMaximumWidth;
@property (nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
@property (readonly, nonatomic) long long currentContentSize;
@property (readonly, nonatomic) double currentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UINavigationBarContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *leadingBarButtonItems; // @synthesize leadingBarButtonItems=_leadingBarButtonItems;
@property (nonatomic) BOOL leadingItemsSupplementBackItem; // @synthesize leadingItemsSupplementBackItem=_leadingItemsSupplementBackItem;
@property (nonatomic) double overrideSize; // @synthesize overrideSize=_overrideSize;
@property (nonatomic) long long requestedContentSize; // @synthesize requestedContentSize=_requestedContentSize;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property (nonatomic) double titleVerticalPositionAdjustment; // @synthesize titleVerticalPositionAdjustment=_titleVerticalPositionAdjustment;
@property (strong, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property (nonatomic) double titleViewAlpha; // @synthesize titleViewAlpha=_titleViewAlpha;
@property (copy, nonatomic) NSArray *trailingBarButtonItems; // @synthesize trailingBarButtonItems=_trailingBarButtonItems;

- (void).cxx_destruct;
- (void)__backButtonAction:(id)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;
- (id)_accessibility_barButtonItemAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (void)_appearanceChanged;
- (void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2;
- (long long)_currentContentSize;
- (id)_defaultInlineTitleAttributes;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (double)_intrinsicHeight;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (id)_newLayout;
- (struct CGRect)_overlayRectForView:(id)arg1 inTargetView:(id)arg2;
- (void)_setupBackButtonAnimated:(BOOL)arg1;
- (void)_setupLeadingButtonBarAnimated:(BOOL)arg1;
- (void)_setupTitleView;
- (void)_setupTrailingButtonBarAnimated:(BOOL)arg1;
- (void)_updateLayoutMarginsForLayout:(id)arg1;
- (void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(BOOL)arg2;
- (id)backIndicatorImage;
- (long long)barType;
- (double)defaultEdgeSpacing;
- (id)defaultFontDescriptor;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isRTL;
- (void)layoutMarginsDidChange;
- (void)recordFromStateForTransition:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)resolvedSizeDidChange;
- (void)safeAreaInsetsDidChange;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setNeedsBackButtonUpdate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedMaximumBackButtonWidth:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContent;
- (void)updateContentAnimated:(BOOL)arg1;

@end
