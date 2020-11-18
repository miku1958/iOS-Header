//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MTUIAlarmView, UISwitch;
@protocol HUAlarmTableViewCellDelegate;

@interface HUAlarmTableViewCell : UITableViewCell
{
    BOOL _disabled;
    BOOL _enabled;
    id<HUAlarmTableViewCellDelegate> _delegate;
    MTUIAlarmView *_alarmView;
    UISwitch *_enabledSwitch;
}

@property (strong, nonatomic) MTUIAlarmView *alarmView; // @synthesize alarmView=_alarmView;
@property (weak, nonatomic) id<HUAlarmTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;

- (void).cxx_destruct;
- (void)_alarmActiveChanged:(id)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshUI:(id)arg1 animated:(BOOL)arg2;
- (void)setAlarmActiveDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setupAsTemplateLayoutCell:(BOOL)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end

