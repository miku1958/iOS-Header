//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerActionItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem
{
    CoreDAVLeafItem *_dtstamp;
    CalDAVCalendarServerActionItem *_action;
}

@property (strong, nonatomic) CalDAVCalendarServerActionItem *action; // @synthesize action=_action;
@property (strong, nonatomic) CoreDAVLeafItem *dtstamp; // @synthesize dtstamp=_dtstamp;

- (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end

