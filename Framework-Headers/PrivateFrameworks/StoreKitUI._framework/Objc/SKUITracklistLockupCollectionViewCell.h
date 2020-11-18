//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>
#import <StoreKitUI/SKUIPreviewContainerView-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, SKUIGradientView, SKUIPreviewProgressIndicator, SKUITrackViewElement, SKUITracklistColumnData, SUPlayerStatus, UIView;

@interface SKUITracklistLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView>
{
    NSMapTable *_buyButtonDescriptorToButton;
    SKUITracklistColumnData *_columnData;
    NSMutableDictionary *_columnViewsByIndex;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIGradientView *_offerConfirmationGradientView;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    long long _previewState;
    UIView *_separatorView;
    SKUITrackViewElement *_track;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_enumerateViewElementViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_layoutConfirmationGradientRelativeToView:(id)arg1 alpha:(double)arg2;
- (id)_previewColumnView;
- (id)_previewControlViewElement;
- (id)_previewMediaURL;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)dealloc;
- (void)hidePreviewProgressAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(BOOL)arg2;
- (void)togglePreviewPlaybackAnimated:(BOOL)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
