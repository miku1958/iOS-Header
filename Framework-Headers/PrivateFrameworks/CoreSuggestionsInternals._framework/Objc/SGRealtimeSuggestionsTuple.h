//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGRealtimeSuggestionsTuple : NSObject
{
    NSArray *_contacts;
    NSArray *_events;
    NSArray *_reminders;
    NSArray *_deliveries;
    NSArray *_invalidatedIdentifiers;
}

@property (strong) NSArray *contacts; // @synthesize contacts=_contacts;
@property (strong) NSArray *deliveries; // @synthesize deliveries=_deliveries;
@property (strong) NSArray *events; // @synthesize events=_events;
@property (strong) NSArray *invalidatedIdentifiers; // @synthesize invalidatedIdentifiers=_invalidatedIdentifiers;
@property (strong) NSArray *reminders; // @synthesize reminders=_reminders;

- (void).cxx_destruct;
- (id)combinedSuggestions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)suggestionsCount;

@end

