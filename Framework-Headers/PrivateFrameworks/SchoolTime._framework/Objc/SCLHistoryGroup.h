//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSMutableArray, SCLSchedule;

@interface SCLHistoryGroup : NSObject
{
    NSDate *_referenceDate;
    SCLSchedule *_effectiveSchedule;
    NSCalendar *_calendar;
    NSMutableArray *_items;
}

@property (readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, copy, nonatomic) SCLSchedule *effectiveSchedule; // @synthesize effectiveSchedule=_effectiveSchedule;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;

+ (id)historyGroupsByPrioritizingSchedule:(id)arg1 forDate:(id)arg2 inCalendar:(id)arg3 items:(id)arg4;
- (void).cxx_destruct;
- (BOOL)canContainUnlockHistoryItem:(id)arg1;
- (id)initWithEffectiveSchedule:(id)arg1 calendar:(id)arg2 referenceDate:(id)arg3;

@end

