//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement
{
    int _state;
}

@property (readonly, nonatomic) int state; // @synthesize state=_state;

- (id)copyParseRules;
- (void)setPublish:(id)arg1;
- (void)setUnpublish:(id)arg1;

@end
