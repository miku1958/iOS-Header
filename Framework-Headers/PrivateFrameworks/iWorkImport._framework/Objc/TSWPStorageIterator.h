//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSMutableArray, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStorageIterator : NSObject
{
    BOOL _sendEventsForNilObjects;
    BOOL _lastEventWasMarker;
    NSCharacterSet *_markers;
    TSWPStorage *_storage;
    unsigned long long _charIndex;
    unsigned long long _startCharIndex;
    NSMutableArray *_rangeProviders;
    NSMutableArray *_locationProviders;
    NSMutableArray *_pendingEvents;
}

@property (nonatomic) unsigned long long charIndex; // @synthesize charIndex=_charIndex;
@property (nonatomic) BOOL lastEventWasMarker; // @synthesize lastEventWasMarker=_lastEventWasMarker;
@property (strong, nonatomic) NSMutableArray *locationProviders; // @synthesize locationProviders=_locationProviders;
@property (strong, nonatomic) NSCharacterSet *markers; // @synthesize markers=_markers;
@property (strong, nonatomic) NSMutableArray *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
@property (strong, nonatomic) NSMutableArray *rangeProviders; // @synthesize rangeProviders=_rangeProviders;
@property (nonatomic) BOOL sendEventsForNilObjects; // @synthesize sendEventsForNilObjects=_sendEventsForNilObjects;
@property (nonatomic) unsigned long long startCharIndex; // @synthesize startCharIndex=_startCharIndex;
@property (strong, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;

- (void).cxx_destruct;
- (void)addAttributeRangeProvider:(int)arg1;
- (void)addLocationProvider:(id)arg1;
- (void)addRangeProvider:(id)arg1;
- (id)description;
- (id)initWithStorage:(id)arg1;
- (id)nextEvent;
- (void)p_emitEventForMarkerCharacter:(unsigned short)arg1 atIndex:(unsigned long long)arg2;
- (void)p_emitEventWithType:(int)arg1 provider:(id)arg2 range:(struct _NSRange)arg3 object:(id)arg4;
- (void)p_emitPendingCharactersAndEvent:(id)arg1;
- (void)p_forceRangeEndForProvider:(id)arg1 providerIndex:(unsigned long long)arg2 atCharIndex:(unsigned long long)arg3;

@end
