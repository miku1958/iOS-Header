//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol UIEventFetcherSink;

__attribute__((visibility("hidden")))
@interface UIEventFetcher : NSObject
{
    NSMutableArray *_incomingHIDEvents;
    NSMutableArray *_incomingHIDEventsFiltered;
    struct __CFRunLoop *_cfRunLoop;
    CDUnknownBlockType _receiveBlock;
    CDUnknownBlockType _addToFilteredEventsBlock;
    CDUnknownBlockType _gameControllerEventFilterGenerator;
    CDUnknownBlockType _passiveObservationFilterGenerator;
    CDUnknownBlockType _watchSystemAppFilter;
    NSMutableArray *_eventFilters;
    int _displayLinkIdleTicks;
    CADisplayLink *_displayLink;
    long long _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    long long _countOfDigitizerEventsReceivedInPreviousFrame;
    BOOL _didSignalOneMoveEventSinceLastDisplayLinkCallback;
    double _lastImportantEventTimestamp;
    double _lastSignalTimestamp;
    double _estimatedDisplayLinkDrift;
    long long _lastSignalType;
    unsigned long long _lastSignalReason;
    BOOL _needsSignalOnDisplayLink;
    id<UIEventFetcherSink> _eventFetcherSink;
    double _commitTimeForTouchEvents;
    double _beginTimeForTouchEvents;
    double _deadlineTimeForTouchEvents;
    NSMutableDictionary *_latestMoveDragEventsBySessionID;
    double _latestMoveDragEventTimestamp;
    double _latestMoveDragEventResendTimestamp;
    NSMutableSet *_contextIDsNeedingHoverEventResend;
    NSMutableDictionary *_latestHoverEventsByContextID;
}

@property (readonly, nonatomic) struct __CFRunLoop *_eventFetchRunLoop;
@property (nonatomic) double beginTimeForTouchEvents; // @synthesize beginTimeForTouchEvents=_beginTimeForTouchEvents;
@property (nonatomic) double commitTimeForTouchEvents; // @synthesize commitTimeForTouchEvents=_commitTimeForTouchEvents;
@property (strong, nonatomic) NSMutableSet *contextIDsNeedingHoverEventResend; // @synthesize contextIDsNeedingHoverEventResend=_contextIDsNeedingHoverEventResend;
@property (nonatomic) double deadlineTimeForTouchEvents; // @synthesize deadlineTimeForTouchEvents=_deadlineTimeForTouchEvents;
@property (strong, nonatomic) id<UIEventFetcherSink> eventFetcherSink; // @synthesize eventFetcherSink=_eventFetcherSink;
@property (strong, nonatomic) NSMutableDictionary *latestHoverEventsByContextID; // @synthesize latestHoverEventsByContextID=_latestHoverEventsByContextID;
@property (nonatomic) double latestMoveDragEventResendTimestamp; // @synthesize latestMoveDragEventResendTimestamp=_latestMoveDragEventResendTimestamp;
@property (nonatomic) double latestMoveDragEventTimestamp; // @synthesize latestMoveDragEventTimestamp=_latestMoveDragEventTimestamp;
@property (strong, nonatomic) NSMutableDictionary *latestMoveDragEventsBySessionID; // @synthesize latestMoveDragEventsBySessionID=_latestMoveDragEventsBySessionID;
@property (nonatomic) BOOL needsSignalOnDisplayLink; // @synthesize needsSignalOnDisplayLink=_needsSignalOnDisplayLink;

- (void).cxx_destruct;
- (void)_addHIDEventFilter:(CDUnknownBlockType)arg1;
- (struct __IOHIDEvent *)_latestHoverEventForContextID:(unsigned int)arg1;
- (void)_receiveHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent *)arg1;
- (void)_removeHIDEventFilter:(CDUnknownBlockType)arg1;
- (void)_removeHIDEventObserver;
- (void)_removeHIDGameControllerEventObserver;
- (void)_resendHoverEventForContextID:(unsigned int)arg1;
- (void)_resendHoverEventForContextIDInternal:(unsigned int)arg1;
- (void)_setHIDEventObserver:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_setHIDGameControllerEventObserver:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_setLatestHoverEvent:(struct __IOHIDEvent *)arg1 forContextID:(unsigned int)arg2;
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

