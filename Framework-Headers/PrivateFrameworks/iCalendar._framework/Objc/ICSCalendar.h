//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSComponent.h>

@class ICSColor, ICSDuration, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ICSCalendar : ICSComponent
{
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableDictionary *_timezones;
    NSMutableArray *_parsingErrors;
}

@property (strong, nonatomic) NSString *calscale;
@property (nonatomic) int method;
@property (strong, nonatomic) NSString *prodid;
@property (strong, nonatomic) NSString *version;
@property (strong, nonatomic) ICSDuration *x_apple_auto_refresh;
@property (strong, nonatomic) ICSColor *x_apple_calendar_color;
@property BOOL x_apple_ignore_on_restore; // @dynamic x_apple_ignore_on_restore;
@property int x_calendarserver_access; // @dynamic x_calendarserver_access;
@property (strong, nonatomic) NSString *x_wr_caldesc;
@property (strong, nonatomic) NSString *x_wr_calname;
@property (strong, nonatomic) NSString *x_wr_relcalid;
@property (strong, nonatomic) NSString *x_wr_timezone;

+ (id)ICSStringFromCalendarServerAccess:(int)arg1;
+ (id)ICSStringFromMethod:(int)arg1;
+ (int)calendarServerAccessFromICSString:(id)arg1;
+ (id)calendarWithKnownTimeZones;
+ (long long)compareCalendarServerAccess:(int)arg1 withAccess:(int)arg2;
+ (id)defaultProdid;
+ (int)methodFromICSString:(id)arg1;
+ (id)name;
+ (void)setDefaultProdid:(id)arg1;
- (void).cxx_destruct;
- (void)_addComponent:(id)arg1;
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;
- (id)_init;
- (id)_initWithVersionAndProdID:(BOOL)arg1;
- (id)_timeZonesForComponents:(id)arg1 options:(int)arg2;
- (void)addComponent:(id)arg1;
- (void)addParsingError:(id)arg1;
- (id)componentForKey:(id)arg1;
- (id)componentKeys;
- (id)componentOccurrencesForKey:(id)arg1;
- (void)fixComponent;
- (void)fixEntities;
- (void)fixPropertiesInheritance;
- (id)init;
- (id)parsingErrors;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)setComponents:(id)arg1;
- (void)setComponents:(id)arg1 options:(int)arg2;
- (void)setComponents:(id)arg1 timeZones:(BOOL)arg2;
- (id)systemCalendarForDate:(id)arg1 options:(int)arg2;
- (id)systemDateForDate:(id)arg1 options:(int)arg2;
- (id)systemTimeZoneForDate:(id)arg1;
- (id)timeZoneForKey:(id)arg1;

@end

