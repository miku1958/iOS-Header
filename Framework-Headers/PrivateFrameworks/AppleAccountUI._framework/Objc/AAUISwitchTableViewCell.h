//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;
@protocol AAUISwitchTableViewCellDelegate;

@interface AAUISwitchTableViewCell : UITableViewCell
{
    UISwitch *_control;
    id<AAUISwitchTableViewCellDelegate> _delegate;
}

@property (readonly, nonatomic) UISwitch *control; // @synthesize control=_control;
@property (weak, nonatomic) id<AAUISwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_controlValueChanged:(id)arg1;
- (void)_delegate_switchTableViewCellDidUpdateValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

