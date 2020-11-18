//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, NSString;
@protocol HUResizableCellDelegate, HUSwitchCellDelegate;

@interface HUSwitchCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>
{
    BOOL _disabled;
    HFItem *_item;
    id<HUSwitchCellDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (nonatomic, getter=isOn) BOOL on;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_switch;
- (void)_toggleOn:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

