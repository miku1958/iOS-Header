//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, SKUIGiftTheme, SKUIItem, SKUIItemArtworkContext, SKUIItemOfferButton, SKUIItemState, UIImage, UIImageView, UILabel;

@interface SKUIGiftItemView : UIView
{
    NSString *_artistName;
    NSString *_categoryName;
    SKUIClientContext *_clientContext;
    SKUIItem *_item;
    UIImageView *_itemImageView;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemState *_itemState;
    long long _itemStyle;
    long long _numberOfUserRatings;
    NSString *_price;
    UIImageView *_starRatingImageView;
    UILabel *_subtitleLabel1;
    UILabel *_subtitleLabel2;
    SKUIGiftTheme *_theme;
    UILabel *_titleLabel;
    float _userRating;
    UILabel *_userRatingCountLabel;
}

@property (copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property (readonly, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property (readonly, nonatomic) long long giftItemStyle; // @synthesize giftItemStyle=_itemStyle;
@property (readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property (strong, nonatomic) UIImage *itemImage;
@property (readonly, nonatomic) SKUIItemOfferButton *itemOfferButton; // @synthesize itemOfferButton=_itemOfferButton;
@property (strong, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;
@property (nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property (copy, nonatomic) NSString *price; // @synthesize price=_price;
@property (copy, nonatomic) SKUIGiftTheme *theme; // @synthesize theme=_theme;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating; // @synthesize userRating=_userRating;

- (void).cxx_destruct;
- (void)_enumerateMetadataViewsUsingBlock:(CDUnknownBlockType)arg1;
- (struct UIEdgeInsets)_imageEdgeInsets;
- (struct CGSize)_imageSize;
- (void)_itemOfferConfirmAction:(id)arg1;
- (id)_newLabel;
- (double)_paddingLeft;
- (double)_paddingRight;
- (void)_reloadItemState:(BOOL)arg1;
- (void)_reloadSubtitles;
- (void)_reloadUserRatingViews;
- (id)_subtitleColor;
- (id)_titleColor;
- (id)_userRatingColor;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 item:(id)arg2 clientContext:(id)arg3;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

