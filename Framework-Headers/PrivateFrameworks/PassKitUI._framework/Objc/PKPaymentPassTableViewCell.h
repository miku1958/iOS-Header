//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentPass, UILabel, UIView;

@interface PKPaymentPassTableViewCell : PKTableViewCell
{
    UILabel *_mainLabel;
    UILabel *_subTextLabel;
    UIView *_cardSnapshotView;
    PKPaymentPass *_pass;
}

@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(BOOL)arg2;
+ (id)subTitleFont;
+ (id)titleFont;
- (void).cxx_destruct;
- (void)_updateLabelText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

