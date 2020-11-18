//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUINavigationBarSectionController.h>

#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>

@class NSMapTable, NSString, SKUINavigationBarViewElement;

@interface SKUINavigationBarButtonsController : SKUINavigationBarSectionController <SKUIItemOfferButtonDelegate>
{
    NSMapTable *_buttonItemElements;
    NSMapTable *_buttonItemToImageResourceCacheKey;
    SKUINavigationBarViewElement *_navigationBarElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1;
- (struct UIEdgeInsets)_imageInsetsForImageViewElement:(id)arg1;
- (void)_itemOfferAction:(id)arg1;
- (void)_reloadButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_showConfirmationAction:(id)arg1;
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_updateItemOfferButton:(id)arg1 withButtonViewElement:(id)arg2;
- (id)addButtonItemWithButtonViewElement:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)dealloc;
- (void)disconnectAllButtons;
- (id)initWithNavigationBarViewElement:(id)arg1;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;

@end

