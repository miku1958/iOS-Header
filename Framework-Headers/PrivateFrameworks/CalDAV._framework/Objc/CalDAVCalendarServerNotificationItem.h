//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem
{
    CoreDAVLeafItem *_dtstamp;
    CoreDAVItem *_content;
}

@property (strong, nonatomic) CoreDAVItem *content; // @synthesize content=_content;
@property (strong, nonatomic) CoreDAVLeafItem *dtstamp; // @synthesize dtstamp=_dtstamp;

- (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end

