//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKCalendar, EKStructuredLocation, EKSuggestedEventInfo, NSArray, NSDate, NSString, NSTimeZone, NSURL, UIColor;

@interface EKUIAutocompleteSearchResult : NSObject
{
    BOOL _allDay;
    BOOL _suggested;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSString *_location;
    NSString *_locationWithoutPrediction;
    EKStructuredLocation *_preferredLocation;
    NSArray *_alarms;
    NSArray *_attendees;
    NSURL *_URL;
    NSString *_notes;
    EKCalendar *_calendar;
    UIColor *_calendarColor;
    EKSuggestedEventInfo *_suggestionInfo;
    NSString *_foundInBundleID;
    NSString *_uniqueID;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property (nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property (strong, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property (strong, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property (strong, nonatomic) UIColor *calendarColor; // @synthesize calendarColor=_calendarColor;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) NSString *foundInBundleID; // @synthesize foundInBundleID=_foundInBundleID;
@property (strong, nonatomic) NSString *location; // @synthesize location=_location;
@property (strong, nonatomic) NSString *locationWithoutPrediction; // @synthesize locationWithoutPrediction=_locationWithoutPrediction;
@property (strong, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property (strong, nonatomic) EKStructuredLocation *preferredLocation; // @synthesize preferredLocation=_preferredLocation;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (nonatomic, getter=isSuggested) BOOL suggested; // @synthesize suggested=_suggested;
@property (strong, nonatomic) EKSuggestedEventInfo *suggestionInfo; // @synthesize suggestionInfo=_suggestionInfo;
@property (strong, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;

+ (BOOL)_participantShouldBeUsedForAutocomplete:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUniqueID:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

