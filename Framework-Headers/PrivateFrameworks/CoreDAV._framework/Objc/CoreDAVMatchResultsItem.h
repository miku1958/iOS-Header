//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem
{
    CoreDAVLeafItem *_rank;
    CoreDAVLeafItem *_language;
    CoreDAVLeafItem *_region;
    CoreDAVLeafItem *_calendarDescription;
}

@property (strong, nonatomic) CoreDAVLeafItem *calendarDescription; // @synthesize calendarDescription=_calendarDescription;
@property (strong, nonatomic) CoreDAVLeafItem *language; // @synthesize language=_language;
@property (strong, nonatomic) CoreDAVLeafItem *rank; // @synthesize rank=_rank;
@property (strong, nonatomic) CoreDAVLeafItem *region; // @synthesize region=_region;

+ (id)copyParseRules;
- (void)dealloc;
- (id)description;

@end
