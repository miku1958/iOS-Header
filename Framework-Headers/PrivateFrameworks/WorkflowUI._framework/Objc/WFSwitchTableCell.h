//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch, WFSwitchTableItem;

@interface WFSwitchTableCell : UITableViewCell
{
    WFSwitchTableItem *_tableItem;
    UISwitch *_switchView;
}

@property (readonly, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property (weak, nonatomic) WFSwitchTableItem *tableItem; // @synthesize tableItem=_tableItem;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)switchValueChanged:(id)arg1;

@end

