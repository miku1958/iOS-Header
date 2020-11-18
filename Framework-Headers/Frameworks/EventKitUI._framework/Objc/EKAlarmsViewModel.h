//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject
{
    BOOL _canHaveLeaveNowAlarm;
    BOOL _hasLeaveNowAlarm;
    BOOL _needsUpdate;
    EKCalendarItem *_calendarItem;
    NSMutableArray *_uiAlarms;
}

@property (strong, nonatomic) EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property (readonly, nonatomic) BOOL canHaveLeaveNowAlarm;
@property (readonly, nonatomic) BOOL hasLeaveNowAlarm;
@property (nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property (strong, nonatomic) NSMutableArray *uiAlarms; // @synthesize uiAlarms=_uiAlarms;

+ (id)labelTextForIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
- (BOOL)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2;
- (void)_updateAlarms;
- (void)_updateLeaveNowFlags;
- (id)createAlarmEditItemViewControllerWithFrame:(struct CGRect)arg1 forAlarmAtIndex:(unsigned long long)arg2;
- (id)init;
- (id)initWithCalendarItem:(id)arg1;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

