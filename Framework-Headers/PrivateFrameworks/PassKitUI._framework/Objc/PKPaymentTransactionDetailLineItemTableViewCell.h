//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIColor, UIFont, UILabel;

@interface PKPaymentTransactionDetailLineItemTableViewCell : UITableViewCell
{
    BOOL _hasTrailingLineSeperator;
    NSString *_titleText;
    UIFont *_titleFont;
    UIColor *_titleColor;
    NSString *_valueText;
    UIFont *_valueFont;
    UIColor *_valueColor;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
}

@property (nonatomic) BOOL hasTrailingLineSeperator; // @synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator;
@property (strong, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property (strong, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property (strong, nonatomic) UIColor *valueColor; // @synthesize valueColor=_valueColor;
@property (strong, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property (strong, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property (strong, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

