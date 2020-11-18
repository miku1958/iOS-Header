//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface AXUIVoiceOverBluetoothDeviceTableCell : PSTableCell
{
    UIActivityIndicatorView *_spinner;
    int _state;
}

+ (id)checkedImage;
+ (id)selectedCheckedImage;
+ (id)spacerImage;
+ (id)textForBTPairedState:(int)arg1;
- (void).cxx_destruct;
- (void)_updateCheckMarkIcon;
- (id)accessibilityTableViewCellText;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)setDeviceState:(int)arg1;
- (void)setDeviceStatePaired:(BOOL)arg1 andConnected:(BOOL)arg2;

@end
