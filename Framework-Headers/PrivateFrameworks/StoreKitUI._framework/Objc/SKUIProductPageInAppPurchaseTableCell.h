//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUITableViewCell.h>

@class NSString, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell
{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInsets;
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}

@property (strong, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (copy, nonatomic) NSString *indexString;
@property (copy, nonatomic) NSString *priceString;
@property (copy, nonatomic) NSString *productName;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;

@end

