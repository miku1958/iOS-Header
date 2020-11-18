//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray, UILabel, UISwitch, UIView;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem
{
    UIView *_footerView;
    UILabel *_descriptionLabel;
    BOOL _underlyingCalendarState;
    BOOL _switchState;
    BOOL _allowEventAlerts;
    NSMutableArray *_cells;
    UISwitch *_toggleSwitch;
}

@property (nonatomic) BOOL allowEventAlerts; // @synthesize allowEventAlerts=_allowEventAlerts;
@property (strong, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property (nonatomic) BOOL switchState; // @synthesize switchState=_switchState;
@property (strong, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
@property (nonatomic) BOOL underlyingCalendarState; // @synthesize underlyingCalendarState=_underlyingCalendarState;

- (void).cxx_destruct;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)_switchStateChanged:(id)arg1;
- (id)cell;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)cellText;
- (id)descriptionLabelText;
- (double)footerHeightForSection;
- (id)footerView;
- (id)footerViewForSection;
- (void)layoutForWidth:(double)arg1;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (BOOL)saveStateToCalendar:(id)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;

@end

