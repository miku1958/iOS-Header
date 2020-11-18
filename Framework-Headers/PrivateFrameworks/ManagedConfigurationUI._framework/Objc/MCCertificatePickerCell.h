//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface MCCertificatePickerCell : PSTableCell
{
    UILabel *_issuedByLabel;
    UILabel *_issuerLabel;
    UILabel *_expiresByLabel;
    UILabel *_expiryDateLabel;
}

+ (id)_attributeFont;
+ (float)_attributeLabelSpace;
+ (id)_dateFormatter;
+ (float)defaultCellHeight;
- (void).cxx_destruct;
- (id)_attributeLabelCopy;
- (id)_checkmarkView;
- (id)_labelColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIssuer:(id)arg1;

@end
