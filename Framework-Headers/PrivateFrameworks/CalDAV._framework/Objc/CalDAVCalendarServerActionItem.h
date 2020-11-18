//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerActionItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_create;
    CalDAVCalendarServerUpdateItem *_update;
    CalDAVCalendarServerCancelItem *_cancel;
    CalDAVCalendarServerReplyItem *_reply;
}

@property (strong, nonatomic) CalDAVCalendarServerCancelItem *cancel; // @synthesize cancel=_cancel;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *create; // @synthesize create=_create;
@property (strong, nonatomic) CalDAVCalendarServerReplyItem *reply; // @synthesize reply=_reply;
@property (strong, nonatomic) CalDAVCalendarServerUpdateItem *update; // @synthesize update=_update;

- (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end
