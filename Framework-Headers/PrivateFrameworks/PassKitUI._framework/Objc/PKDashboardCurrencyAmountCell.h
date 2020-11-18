//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, PKCurrencyAmount, UILabel;

@interface PKDashboardCurrencyAmountCell : PKDashboardCollectionViewCell
{
    NSString *_titleString;
    PKCurrencyAmount *_currencyAmount;
    UILabel *_titleLabel;
    UILabel *_currencyLabel;
    BOOL _showsPositivePrefix;
    NSString *_detailString;
    PKCurrencyAmount *_amount;
}

@property (copy, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property (copy, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property (nonatomic) BOOL showsPositivePrefix; // @synthesize showsPositivePrefix=_showsPositivePrefix;
@property (copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;

- (void).cxx_destruct;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (BOOL)_shouldUseStackedLayout;
- (void)_updateCurrencyLabel;
- (id)defaultPrimaryColor;
- (id)defaultSecondaryColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetFonts;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

