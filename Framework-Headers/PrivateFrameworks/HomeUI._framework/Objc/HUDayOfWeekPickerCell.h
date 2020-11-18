//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, NSArray, NSSet, NSString, UIStackView;
@protocol HUDayOfWeekPickerCellDelegate, HUResizableCellDelegate;

@interface HUDayOfWeekPickerCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    id<HUDayOfWeekPickerCellDelegate> _delegate;
    NSSet *_selectedRecurrences;
    NSArray *_buttons;
    UIStackView *_buttonStackView;
}

@property (strong, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property (strong, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUDayOfWeekPickerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (strong, nonatomic) NSSet *selectedRecurrences; // @synthesize selectedRecurrences=_selectedRecurrences;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_toggleWeekdayButton:(id)arg1;
- (void)_updateSelectedDays;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)tintColorDidChange;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

