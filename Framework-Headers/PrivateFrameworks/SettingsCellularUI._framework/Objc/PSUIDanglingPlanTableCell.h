//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PSUIDanglingPlanTableCell : PSTableCell
{
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_statusLabel;
    UILabel *_centeredNameLabel;
    UIView *_accessorySpacerView;
}

@property (strong, nonatomic) UIView *accessorySpacerView; // @synthesize accessorySpacerView=_accessorySpacerView;
@property (strong, nonatomic) UILabel *centeredNameLabel; // @synthesize centeredNameLabel=_centeredNameLabel;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (strong, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property (strong, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;

+ (long long)cellStyle;
- (void).cxx_destruct;
- (void)_setCenteredText:(id)arg1;
- (void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2;
- (void)_setView;
- (BOOL)canBeChecked;
- (BOOL)canReload;
- (id)detailTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setAccessoryType:(long long)arg1;
- (id)textLabel;

@end
