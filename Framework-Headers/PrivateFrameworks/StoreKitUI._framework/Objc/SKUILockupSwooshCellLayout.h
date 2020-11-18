//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout
{
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    UIImageView *_iconHighlightImageView;
    UILabel *_itemCountLabel;
    struct CGSize _maxImageSize;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_videoHighlightImageView;
    UIImageView *_videoImageView;
    UIImageView *_videoPlayButtonImageView;
    struct CGSize _videoSize;
    unsigned long long _visibleFields;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *itemCountString;
@property (nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property (strong, nonatomic) UIImage *videoThumbnailImage;
@property (nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;

- (void).cxx_destruct;
- (void)_layoutFieldsHorizontal;
- (void)_layoutFieldsVertical;
- (id)_newDefaultLabel;
- (void)_reloadHighlight;
- (void)_reloadPriceLabel;
- (void)_removeHighlightViews;
- (struct CGSize)cellSizeForImageOfSize:(struct CGSize)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;

@end
