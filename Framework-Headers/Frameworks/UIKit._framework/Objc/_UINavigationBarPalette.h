//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>
#import <UIKitCore/_UINavigationPalette-Protocol.h>

@class NSString, UINavigationController, UINavigationItem, _UIPointerInteractionAssistant;

@interface _UINavigationBarPalette : UIView <_UINavigationPalette, UIPointerInteractionDelegate>
{
    BOOL _didSetMinimumHeight;
    BOOL _transitioning;
    BOOL _pinned;
    BOOL __displaysWhenSearchActive;
    UIView *_contentView;
    double _preferredHeight;
    double _minimumHeight;
    UIView *_temporaryBackgroundView;
    NSString *_assistantIdentifier;
    _UIPointerInteractionAssistant *_assistant;
    UINavigationItem *_owningNavigationItem;
    unsigned long long __contentViewMarginType;
    long long __layoutPriority;
}

@property (strong, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setContentViewMarginType:) unsigned long long _contentViewMarginType; // @synthesize _contentViewMarginType=__contentViewMarginType;
@property (nonatomic, setter=_setDisplaysWhenSearchActive:) BOOL _displaysWhenSearchActive; // @synthesize _displaysWhenSearchActive=__displaysWhenSearchActive;
@property (nonatomic, setter=_setLayoutPriority:) long long _layoutPriority; // @synthesize _layoutPriority=__layoutPriority;
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar;
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant; // @synthesize assistant=_assistant;
@property (copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property (readonly, nonatomic) unsigned long long boundaryEdge;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetMinimumHeight; // @synthesize didSetMinimumHeight=_didSetMinimumHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property (readonly, nonatomic) UINavigationController *navController;
@property (weak, nonatomic) UINavigationItem *owningNavigationItem; // @synthesize owningNavigationItem=_owningNavigationItem;
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) struct UIEdgeInsets preferredContentInsets;
@property (nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *temporaryBackgroundView; // @synthesize temporaryBackgroundView=_temporaryBackgroundView;
@property (nonatomic) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden;

+ (id)defaultContentViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (id)_attachedPinningTopBar;
- (void)_clearAssistants;
- (void)_configureConstraintsForBackground:(id)arg1;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_disableConstraints;
- (void)_enableConstraints;
- (void)_resetConstraintConstants:(double)arg1;
- (void)_resetHeightConstraintConstant;
- (void)_setAssistants;
- (void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)_setLeftConstraintConstant:(double)arg1;
- (void)_setSize:(struct CGSize)arg1;
- (void)_setTopConstraintConstant:(double)arg1;
- (void)_setupBackgroundViewIfNecessary;
- (BOOL)_shouldUpdateBackground;
- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_updateBackgroundView;
- (void)addSubview:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (BOOL)isAttached;
- (void)layoutSubviews;
- (BOOL)paletteIsHidden;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)resetBackgroundConstraints;
- (void)setFrame:(struct CGRect)arg1 isAnimating:(BOOL)arg2;

@end

