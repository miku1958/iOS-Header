//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIImageView, UILabel;

@interface PSStorageItemCell : PSTableCell
{
    NSMutableArray *_constraints;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_sizeLabel;
    long long _size;
}

+ (id)specifierForItemURL:(id)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;

@end
