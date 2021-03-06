//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendar, NSDate, NSTimeZone;

@interface EKUIAutocompleteTracker : NSObject
{
    BOOL _hasTrackedZKWQuery;
    BOOL _hasTrackedZKWResultShown;
    BOOL _hasTrackedAutocompleteQuery;
    BOOL _hasTrackedAutocompleteResultsShown;
    BOOL _hasTrackedNLResultShown;
    BOOL _hasFinalizedTracking;
    BOOL _initialIsAllDay;
    unsigned long long _finalNumberOfAutocompleteResults;
    NSDate *_initialStartDate;
    NSDate *_initialEndDate;
    NSTimeZone *_initialTimeZone;
    EKCalendar *_initialCalendar;
}

@property unsigned long long finalNumberOfAutocompleteResults; // @synthesize finalNumberOfAutocompleteResults=_finalNumberOfAutocompleteResults;
@property (strong) EKCalendar *initialCalendar; // @synthesize initialCalendar=_initialCalendar;
@property (strong) NSDate *initialEndDate; // @synthesize initialEndDate=_initialEndDate;
@property BOOL initialIsAllDay; // @synthesize initialIsAllDay=_initialIsAllDay;
@property (strong) NSDate *initialStartDate; // @synthesize initialStartDate=_initialStartDate;
@property (strong) NSTimeZone *initialTimeZone; // @synthesize initialTimeZone=_initialTimeZone;

+ (BOOL)_isChangeToTrackedPropertySignificant:(unsigned long long)arg1;
+ (BOOL)_trackedEventProperty:(unsigned long long)arg1 isPresentInAutocompleteResult:(id)arg2;
+ (BOOL)_trackedEventProperty:(unsigned long long)arg1 wasOverriddenInEvent:(id)arg2 fromAutocompleteResult:(id)arg3;
+ (id)propertyName:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_augmentPayload:(id)arg1 withEvent:(id)arg2 selectedResult:(id)arg3 selectedIndex:(unsigned long long)arg4 isZKW:(BOOL)arg5;
- (BOOL)_trackedEventProperty:(unsigned long long)arg1 wasSetInNewEvent:(id)arg2;
- (void)finalizeAutocompleteTrackingOnSave:(BOOL)arg1 withEvent:(id)arg2 selectedResult:(id)arg3 selectedIndex:(unsigned long long)arg4 isZKW:(BOOL)arg5;
- (void)trackAutocompleteQuery;
- (void)trackAutocompleteResultsShown;
- (void)trackNLResultShown;
- (void)trackZKWQuery;
- (void)trackZKWResultShown;

@end

