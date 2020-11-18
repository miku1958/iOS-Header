//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIAttributedStringView, UIActivityIndicatorView, UIImageView;

@interface SKUIActivityIndicatorView : SKUIViewReuseView <SKUIViewElementView>
{
    unsigned long long _alignment;
    BOOL _animating;
    struct UIEdgeInsets _contentInset;
    UIImageView *_imageView;
    UIActivityIndicatorView *_indicatorView;
    SKUIAttributedStringView *_stringView;
    double _period;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize)_activityIndicatorSize;
+ (id)_attributedStringWithLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (BOOL)_isAnimating;
- (void)_startAnimating;
- (void)_stopAnimating;
- (void)_updateSpinnerAnimation;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end

