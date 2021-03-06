//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import <StoreKitUI/SKUIPerspectiveView-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UIScrollViewAccessibilityDelegate-Protocol.h>

@class NSString, SKUIButtonViewElement, SKUICellScrollView, SKUICheckboxInputViewElement, SKUIHorizontalLockupView, UIButton, UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIHorizontalLockupCollectionViewCell : SKUICollectionViewCell <UIScrollViewAccessibilityDelegate, SKUIPerspectiveView, SKUIViewElementView>
{
    UIButton *_actionButton;
    SKUIButtonViewElement *_actionButtonViewElement;
    SKUICellScrollView *_actionsScrollView;
    struct UIEdgeInsets _contentInset;
    SKUICheckboxInputViewElement *_editModeCheckboxElement;
    UIImageView *_editModeControl;
    UIView *_highlightBackgroundView;
    SKUIHorizontalLockupView *_lockupView;
    UIColor *_lockupViewBackgroundColor;
}

@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isScrollingCellToHideActionButton) BOOL scrollingCellToHideActionButton;
@property (readonly) Class superclass;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_actionButtonAction:(id)arg1;
- (void)_addEditControlAnimated:(BOOL)arg1;
- (id)_attributedStringForActionButton:(id)arg1 context:(id)arg2;
- (id)_editControlImage;
- (id)_highlightBackgroundColor;
- (BOOL)_isActionsScrollViewEnabled;
- (void)_reloadActionsScrollViewWithViewElement:(id)arg1 context:(id)arg2;
- (void)_reloadHighlightBackgroundView;
- (void)_reloadLockupViewBackgroundColor;
- (void)_removeEditControlAnimated:(BOOL)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)hideDeleteButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isDeleteButtonHidden;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end

