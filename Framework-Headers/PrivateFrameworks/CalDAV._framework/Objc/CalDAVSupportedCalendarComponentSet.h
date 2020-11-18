//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem
{
    NSMutableSet *_comps;
}

@property (readonly, nonatomic) NSSet *compNames;
@property (strong, nonatomic) NSMutableSet *comps; // @synthesize comps=_comps;

- (void).cxx_destruct;
- (void)addComp:(id)arg1;
- (id)childrenToWrite;
- (id)componentsAsString;
- (id)copyParseRules;
- (id)description;
- (id)init;

@end

