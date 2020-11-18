//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSMutableDictionary;
@protocol UIEventFetcherSink;

__attribute__((visibility("hidden")))
@interface UIEventFetcher : NSObject
{
    NSMutableArray *_incomingHIDEvents;
    NSMutableArray *_incomingHIDEventsFiltered;
    struct __CFRunLoop *_cfRunLoop;
    struct __CFRunLoopSource *_triggerHandOffEventsRunLoopSource;
    CDUnknownBlockType _receiveBlock;
    CDUnknownBlockType _addToFilteredEventsBlock;
    CDUnknownBlockType _gameControllerEventFilterGenerator;
    CDUnknownBlockType _watchSystemAppFilter;
    NSMutableArray *_eventFilters;
    int _displayLinkIdleTicks;
    CADisplayLink *_displayLink;
    long long _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    BOOL _didDispatchOneMoveEventSinceLastDisplayLinkCallback;
    double _lastImportantEventTimestamp;
    BOOL _shouldSignalOnDisplayLink;
    id<UIEventFetcherSink> _eventFetcherSink;
    double _commitTimeForTouchEvents;
    NSMutableDictionary *_latestMoveDragEventsBySessionID;
    double _latestMoveDragEventTimestamp;
    double _latestMoveDragEventResendTimestamp;
}

@property (nonatomic) double commitTimeForTouchEvents; // @synthesize commitTimeForTouchEvents=_commitTimeForTouchEvents;
@property (strong, nonatomic) id<UIEventFetcherSink> eventFetcherSink; // @synthesize eventFetcherSink=_eventFetcherSink;
@property (nonatomic) double latestMoveDragEventResendTimestamp; // @synthesize latestMoveDragEventResendTimestamp=_latestMoveDragEventResendTimestamp;
@property (nonatomic) double latestMoveDragEventTimestamp; // @synthesize latestMoveDragEventTimestamp=_latestMoveDragEventTimestamp;
@property (strong, nonatomic) NSMutableDictionary *latestMoveDragEventsBySessionID; // @synthesize latestMoveDragEventsBySessionID=_latestMoveDragEventsBySessionID;
@property (nonatomic) BOOL shouldSignalOnDisplayLink; // @synthesize shouldSignalOnDisplayLink=_shouldSignalOnDisplayLink;

- (void).cxx_destruct;
- (void)_addHIDEventFilter:(CDUnknownBlockType)arg1;
- (void)_receiveHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent *)arg1;
- (void)_removeHIDEventFilter:(CDUnknownBlockType)arg1;
- (void)_removeHIDGameControllerEventObserver;
- (void)_setHIDGameControllerEventObserver:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_setupFilterChain;
- (void)displayLinkDidFire:(id)arg1;
- (void)drainEventsIntoEnvironment:(id)arg1;
- (void)filterEvents;
- (id)init;
- (void)setupForRunLoop:(id)arg1;
- (void)setupThreadAndRun;
- (void)signalEventsAvailableWithReason:(unsigned long long)arg1 filteredEventCount:(long long)arg2;
- (void)threadMain;

@end

