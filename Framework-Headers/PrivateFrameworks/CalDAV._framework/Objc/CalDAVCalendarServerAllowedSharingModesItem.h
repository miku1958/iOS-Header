//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_canBePublished;
    CoreDAVItemWithNoChildren *_canBeShared;
    CoreDAVItemWithNoChildren *_isMarkedUndeletable;
    CoreDAVItemWithNoChildren *_isMarkedImmutableSharees;
}

@property (strong, nonatomic) CoreDAVItemWithNoChildren *canBePublished; // @synthesize canBePublished=_canBePublished;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *canBeShared; // @synthesize canBeShared=_canBeShared;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees; // @synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees;
@property (strong, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable; // @synthesize isMarkedUndeletable=_isMarkedUndeletable;

- (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end
