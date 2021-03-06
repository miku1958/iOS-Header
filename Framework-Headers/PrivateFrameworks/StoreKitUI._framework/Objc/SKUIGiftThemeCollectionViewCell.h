//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SKUIGift, SKUIGiftConfiguration, SKUIGiftItemView, SKUIGiftTheme, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell
{
    SKUIGiftConfiguration *_giftConfiguration;
    SKUIGift *_gift;
    UIImageView *_headerImageView;
    SKUIGiftItemView *_itemView;
    UILabel *_messageLabel;
    UILabel *_priceLabel;
    UILabel *_senderNameLabel;
    UILabel *_senderNameLabelLabel;
    SKUIGiftTheme *_theme;
}

@property (strong, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
@property (strong, nonatomic) SKUIGiftConfiguration *giftConfiguration; // @synthesize giftConfiguration=_giftConfiguration;
@property (strong, nonatomic) UIImage *itemImage;
@property (strong, nonatomic) SKUIGiftTheme *theme; // @synthesize theme=_theme;

- (void).cxx_destruct;
- (id)_itemView;
- (void)_reloadItemView;
- (void)_setHeaderImage:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setSenderName:(id)arg1;
- (void)layoutSubviews;
- (void)reloadThemeHeaderImage;
- (void)setBackgroundColor:(id)arg1;

@end

