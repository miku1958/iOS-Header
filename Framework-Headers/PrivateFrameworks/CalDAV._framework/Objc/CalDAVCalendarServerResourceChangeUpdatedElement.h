//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement
{
    BOOL _content;
    CoreDAVItem *_prop;
    NSMutableSet *_calendarChanges;
}

@property (strong, nonatomic) NSMutableSet *calendarChanges; // @synthesize calendarChanges=_calendarChanges;
@property (nonatomic) BOOL content; // @synthesize content=_content;
@property (strong, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;

- (void).cxx_destruct;
- (void)addCalendarChange:(id)arg1;
- (void)addContentItem:(id)arg1;
- (id)copyParseRules;
- (id)init;

@end

