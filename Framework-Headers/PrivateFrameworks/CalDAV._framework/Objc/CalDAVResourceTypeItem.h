//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem
{
    CoreDAVItemWithNoChildren *_calendar;
    CoreDAVItemWithNoChildren *_scheduleInbox;
    CoreDAVItemWithNoChildren *_scheduleOutbox;
    CoreDAVItemWithNoChildren *_notification;
    CoreDAVItemWithNoChildren *_subscribed;
    CoreDAVItemWithNoChildren *_sharedOwner;
    CoreDAVItemWithNoChildren *_isFamilyCalendar;
}

@property (strong, nonatomic) CoreDAVItemWithNoChildren *calendar; // @synthesize calendar=_calendar;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *isFamilyCalendar; // @synthesize isFamilyCalendar=_isFamilyCalendar;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *notification; // @synthesize notification=_notification;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *scheduleInbox; // @synthesize scheduleInbox=_scheduleInbox;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *scheduleOutbox; // @synthesize scheduleOutbox=_scheduleOutbox;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *subscribed; // @synthesize subscribed=_subscribed;

- (void).cxx_destruct;
- (id)copyParseRules;
- (void)write:(id)arg1;

@end

