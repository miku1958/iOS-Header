//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface PSSubtitleDisclosureTableCell : PSTableCell
{
    UILabel *_valueLabel;
}

@property (strong, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;

+ (long long)cellStyle;
- (void).cxx_destruct;
- (void)_valueLabelForSpecifier:(id)arg1;
- (BOOL)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

