//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSString, SKUIAttributedStringView, SKUITextBoxView, UIImageView;

@interface SKUIResponseView : SKUIViewReuseView <SKUIViewElementView>
{
    SKUITextBoxView *_descriptionView;
    SKUIAttributedStringView *_subtitleView;
    UIImageView *_replyImageView;
    NSMapTable *_allViewTextProperties;
    struct UIEdgeInsets _contentInset;
}

@property (strong, nonatomic) NSMapTable *allViewTextProperties; // @synthesize allViewTextProperties=_allViewTextProperties;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SKUITextBoxView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *replyImageView; // @synthesize replyImageView=_replyImageView;
@property (strong, nonatomic) SKUIAttributedStringView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property (readonly) Class superclass;

+ (id)_attributedStringForSubtitleLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end

