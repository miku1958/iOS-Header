//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, SKUIImageDeckViewElement, UIDynamicAnimator, UIView;

__attribute__((visibility("hidden")))
@interface SKUIImageDeckView : SKUIViewReuseView <UIGestureRecognizerDelegate, SKUIViewElementView>
{
    UIDynamicAnimator *_animator;
    double _fitWidth;
    SKUIImageDeckViewElement *_imageDeckViewElement;
    NSMapTable *_viewElementViews;
    NSArray *_imageViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    UIView *_selectedImageView;
    unsigned long long _selectedImageViewIndex;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property (readonly) Class superclass;

+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_layoutImages;
- (id)init;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end

