//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface CKMultipleIDSSubscriptionsTableCell : PSTableCell
{
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_centeredNameLabel;
}

@property (strong, nonatomic) UILabel *centeredNameLabel; // @synthesize centeredNameLabel=_centeredNameLabel;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (strong, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;

+ (long long)cellStyle;
- (void).cxx_destruct;
- (BOOL)canBeChecked;
- (BOOL)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
