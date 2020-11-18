//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class EKAlarmsViewModel, NSArray;

__attribute__((visibility("hidden")))
@interface EKEventAlarmDetailItem : EKEventDetailItem
{
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    BOOL _hasLeaveNowAlarm;
    BOOL _canHaveLeaveNowAlarm;
    EKAlarmsViewModel *_alarmsViewModel;
}

@property (strong, nonatomic) EKAlarmsViewModel *alarmsViewModel; // @synthesize alarmsViewModel=_alarmsViewModel;

+ (id)_textLabelForIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
- (BOOL)_alarmsAreCreatable;
- (BOOL)_alarmsAreEditable;
- (void)_updateAlarms;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (BOOL)editItemViewControllerSave:(id)arg1;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end

