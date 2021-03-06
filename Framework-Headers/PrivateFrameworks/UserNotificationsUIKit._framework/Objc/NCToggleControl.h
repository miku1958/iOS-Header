//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLGlyphControl.h>

#import <UserNotificationsUIKit/NCClickInteractionPresenterDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/_UICursorInteractionDelegate-Protocol.h>

@class NCClickInteractionPresenter, NCToggleControlPair, NSString, UILabel;
@protocol NCToggleControlDelegate;

@interface NCToggleControl : PLGlyphControl <NCClickInteractionPresenterDelegate, _UICursorInteractionDelegate, PLContentSizeCategoryAdjusting>
{
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _expanded;
    BOOL _glyphAlwaysVisible;
    BOOL _expandedPriorToControlEvent;
    unsigned int _anchorEdge;
    NSString *_preferredContentSizeCategory;
    id<NCToggleControlDelegate> _delegate;
    unsigned long long _toggleControlType;
    UILabel *_titleLabel;
    NCToggleControlPair *_managingPair;
    NCClickInteractionPresenter *_previewInteractionPlatterPresenter;
    struct CGSize _cachedEffectiveMaxExpandedSize;
    struct CGSize _cachedEffectiveMaxUnexpandedSize;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (nonatomic) unsigned int anchorEdge; // @synthesize anchorEdge=_anchorEdge;
@property (readonly, nonatomic, getter=_cachedEffectiveMaxExpandedSize) struct CGSize cachedEffectiveMaxExpandedSize; // @synthesize cachedEffectiveMaxExpandedSize=_cachedEffectiveMaxExpandedSize;
@property (readonly, nonatomic, getter=_cachedEffectiveMaxUnexpandedSize) struct CGSize cachedEffectiveMaxUnexpandedSize; // @synthesize cachedEffectiveMaxUnexpandedSize=_cachedEffectiveMaxUnexpandedSize;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCToggleControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (nonatomic, getter=_wasExpandedPriorToControlEvent) BOOL expandedPriorToControlEvent; // @synthesize expandedPriorToControlEvent=_expandedPriorToControlEvent;
@property (nonatomic, getter=isGlyphAlwaysVisible) BOOL glyphAlwaysVisible; // @synthesize glyphAlwaysVisible=_glyphAlwaysVisible;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic, getter=_managingPair, setter=_setManagingPair:) NCToggleControlPair *managingPair; // @synthesize managingPair=_managingPair;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (strong, nonatomic, getter=_previewInteractionPlatterPresenter) NCClickInteractionPresenter *previewInteractionPlatterPresenter; // @synthesize previewInteractionPlatterPresenter=_previewInteractionPlatterPresenter;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, nonatomic, getter=_toggleControlType) unsigned long long toggleControlType; // @synthesize toggleControlType=_toggleControlType;

+ (id)_labelFont:(BOOL)arg1;
+ (id)dismissControlWithMaterialRecipe:(long long)arg1;
+ (double)effectiveHeight:(BOOL)arg1;
+ (void)performWithDefaultExpansionAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)showLessControlWithMaterialRecipe:(long long)arg1;
- (void).cxx_destruct;
- (void)_configureTitleLabelIfNecessaryWithTitle:(id)arg1;
- (double)_cornerRadius;
- (struct CGSize)_effectiveExpandedSize;
- (struct CGSize)_effectiveGlyphSize;
- (double)_effectiveHeight;
- (double)_effectiveInternalPadding;
- (double)_effectiveLeadingTrailingPadding;
- (struct CGSize)_effectiveUnexpandedSize;
- (double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2;
- (void)_handleSecondaryClickEventForGestureRecognizer:(id)arg1;
- (void)_handleTouchUpInsideWithEvent:(id)arg1;
- (id)_labelFont;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 whenExpanded:(BOOL)arg2;
- (struct CGRect)_unexpandedFrame;
- (void)_updateTitleLabelTextAttributes;
- (void)_updateTitleLabelVisualStyling;
- (void)addTarget:(id)arg1 forPreviewInteractionPresentedContentWithAction:(SEL)arg2;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)clickInteractionPresenterDidBeginInteraction:(id)arg1;
- (void)clickInteractionPresenterDidCommitToPresentation:(id)arg1;
- (void)clickInteractionPresenterDidDismiss:(id)arg1;
- (void)clickInteractionPresenterDidPresent:(id)arg1;
- (BOOL)clickInteractionPresenterShouldBegin:(id)arg1;
- (id)containerViewForClickInteractionPresenter:(id)arg1;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

