//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem
{
    NSMutableSet *_transports;
}

@property (strong, nonatomic) NSMutableSet *transports; // @synthesize transports=_transports;

+ (id)copyParseRules;
- (void).cxx_destruct;
- (void)addTransport:(id)arg1;
- (id)description;
- (id)init;

@end

