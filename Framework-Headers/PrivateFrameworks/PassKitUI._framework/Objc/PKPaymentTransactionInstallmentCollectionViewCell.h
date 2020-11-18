//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PKPaymentTransactionInstallmentCollectionViewCell : PKDashboardCollectionViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_tertiaryLabel;
    UIImage *_icon;
    NSString *_title;
    NSString *_subtitle;
    NSString *_tertiaryText;
}

@property (strong, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *tertiaryText; // @synthesize tertiaryText=_tertiaryText;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (double)_maxWidthForTransactionCellInWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
