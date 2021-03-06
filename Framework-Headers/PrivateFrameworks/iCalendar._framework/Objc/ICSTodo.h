//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSCalendarItem.h>

@class ICSDate, ICSDuration, ICSStructuredLocation, ICSUserAddress, NSArray, NSData, NSString, NSURL;

@interface ICSTodo : ICSCalendarItem
{
}

@property (strong) NSArray *attach; // @dynamic attach;
@property (strong) NSArray *attendee; // @dynamic attendee;
@property int classification; // @dynamic classification;
@property (strong, nonatomic) ICSDate *completed;
@property (strong) NSArray *conferences; // @dynamic conferences;
@property (strong) ICSDate *created; // @dynamic created;
@property (strong) NSString *description; // @dynamic description;
@property (strong) ICSDate *dtstamp; // @dynamic dtstamp;
@property (strong) ICSDate *dtstart; // @dynamic dtstart;
@property (strong, nonatomic) ICSDate *due;
@property (strong) ICSDuration *duration; // @dynamic duration;
@property (strong) NSArray *exdate; // @dynamic exdate;
@property (strong) NSArray *exrule; // @dynamic exrule;
@property (strong) ICSDate *last_modified; // @dynamic last_modified;
@property (strong) NSString *location; // @dynamic location;
@property (strong) ICSUserAddress *organizer; // @dynamic organizer;
@property (nonatomic) long long percentComplete;
@property unsigned long long priority; // @dynamic priority;
@property (strong) NSArray *rdate; // @dynamic rdate;
@property (strong) ICSDate *recurrence_id; // @dynamic recurrence_id;
@property (strong) NSArray *rrule; // @dynamic rrule;
@property unsigned long long sequence; // @dynamic sequence;
@property int status; // @dynamic status;
@property (strong) NSString *summary; // @dynamic summary;
@property (strong) NSString *uid; // @dynamic uid;
@property (strong) NSURL *url; // @dynamic url;
@property (strong, nonatomic) NSArray *x_apple_activity;
@property (strong, nonatomic) NSData *x_apple_appLinkData;
@property (strong) NSString *x_apple_ews_changekey; // @dynamic x_apple_ews_changekey;
@property (strong) NSString *x_apple_ews_itemid; // @dynamic x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation; // @dynamic x_apple_ews_needsserverconfirmation;
@property (strong) NSString *x_apple_ews_permission; // @dynamic x_apple_ews_permission;
@property (nonatomic) unsigned long long x_apple_sort_order;
@property (strong) ICSStructuredLocation *x_apple_structured_location; // @dynamic x_apple_structured_location;

+ (id)name;
- (void)fixComponent;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (BOOL)validate:(id *)arg1;

@end

