//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UIImage, UIImageView, UILabel;

@interface PSStorageAppHeaderCell : PSTableCell
{
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_vendorLabel;
    UIImageView *_appIconView;
    UIImageView *_cloudIconView;
    UIImage *_icon;
    BOOL _isDemoted;
    BOOL _infoLabelEnabled;
}

+ (id)specifierForAppBundleURL:(id)arg1;
+ (id)specifierForAppIdentifier:(id)arg1;
+ (id)specifierForAppProxy:(id)arg1;
+ (id)specifierForStorageApp:(id)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;

@end
