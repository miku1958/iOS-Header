//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PlatterKit/MTMaterialGrouping-Protocol.h>
#import <PlatterKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class MTMaterialView, MTShadowView, NSArray, NSMapTable, NSString, PLPillContentItem, UIStackView;

@interface PLPillView : UIView <MTMaterialGrouping, PLContentSizeCategoryAdjusting>
{
    MTMaterialView *_materialView;
    MTShadowView *_shadowView;
    UIStackView *_centerStackView;
    NSArray *_centerStackViewLeadingTrailingConstraints;
    UIView *_referenceContentItemView;
    NSMapTable *_wrapperViewsToLeadingConstraints;
    NSMapTable *_wrapperViewsToTrailingConstraints;
    BOOL _adjustsFontForContentSizeCategory;
    NSString *_preferredContentSizeCategory;
    UIView *_leadingAccessoryView;
    UIView *_trailingAccessoryView;
    NSArray *_centerContentItems;
    PLPillContentItem *_referenceContentItemForIntrinsicContentSize;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSArray *centerContentItems; // @synthesize centerContentItems=_centerContentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *leadingAccessoryView; // @synthesize leadingAccessoryView=_leadingAccessoryView;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (copy, nonatomic) PLPillContentItem *referenceContentItemForIntrinsicContentSize; // @synthesize referenceContentItemForIntrinsicContentSize=_referenceContentItemForIntrinsicContentSize;
@property (readonly, nonatomic) struct UIEdgeInsets shadowOutsets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;

- (void).cxx_destruct;
- (id)_arrangedSubviewForContentItem:(id)arg1;
- (void)_cleanupStackView;
- (void)_configureCenterStackViewIfNecessary;
- (void)_configureShadowViewIfNecessary;
- (double)_effectiveCornerRadius;
- (double)_effectiveMinWidth;
- (double)_effectivemaxWidth;
- (void)_incomingTopWrapperView:(id *)arg1 incomingBottomWrapperView:(id *)arg2 outgoingWrapperViews:(id)arg3 forOutgoingContentItems:(id)arg4 incomingContentItems:(id)arg5 existingWrapperViews:(id)arg6;
- (struct CGSize)_intrinsicContentSizeWithReferenceView:(id)arg1;
- (BOOL)_isAccessoryPinnedToTopLine;
- (BOOL)_isWrappingRequiredForView:(id)arg1 inBounds:(struct CGRect)arg2;
- (id)_referenceContentItemView;
- (void)_updateConstraintForWrapperView:(id)arg1 leading:(BOOL)arg2 collection:(id)arg3;
- (void)_updateConstraintsForWrapperView:(id)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)init;
- (id)initWithLeadingAccessoryView:(id)arg1;
- (id)initWithLeadingAccessoryView:(id)arg1 trailingAccessoryView:(id)arg2;
- (id)initWithTrailingAccessoryView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setCenterContentItems:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFitsContentItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
