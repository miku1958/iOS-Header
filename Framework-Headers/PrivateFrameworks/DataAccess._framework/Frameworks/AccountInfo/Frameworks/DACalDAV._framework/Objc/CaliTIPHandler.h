//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CaliTIPHandler : NSObject
{
}

+ (id)_calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2;
+ (id)debugStringForEvent:(id)arg1;
+ (BOOL)diffsAreImportant:(id)arg1;
+ (BOOL)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3;
+ (id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3;
+ (void)initialize;
+ (BOOL)isAddressMe:(id)arg1 forAccount:(id)arg2;
+ (BOOL)logiTIPDetail;
+ (id)myAddressInAccount:(id)arg1 forEvent:(id)arg2;
+ (BOOL)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2;
+ (void)processMessage:(id)arg1 inCalendar:(id)arg2;
+ (void)processMessages:(id)arg1 inCalendar:(id)arg2;
+ (void)setLogiTIPDetail:(BOOL)arg1;

@end

