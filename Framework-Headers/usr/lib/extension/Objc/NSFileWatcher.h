//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileWatcherObservations, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_4c969caf _auditToken;
    NSURL *_url;
    CDUnknownBlockType _observer;
    BOOL _isWatching;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned long long _lastObservedEventID;
    struct __FSEventStream *_eventStream;
    BOOL _eventsAreAboutDirectory;
    BOOL _isUnsettled;
    NSFileWatcherObservations *_itemObservations;
    NSMutableDictionary *_subitemObservationsByEventPath;
    NSURL *_fileReferenceURL;
    NSString *_formerPath;
    NSURL *_formerURL;
}

- (void)_coalesceSubitemObservations;
- (void)dealloc;
- (void)handleFSEventPath:(id)arg1 flags:(unsigned int)arg2 id:(unsigned long long)arg3;
- (id)initWithQueue:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;
- (void)setLastObservedEventID:(unsigned long long)arg1;
- (void)setObserver:(CDUnknownBlockType)arg1;
- (void)setURL:(id)arg1;
- (void)settle;
- (void)start;
- (void)stop;
- (void)unsettle;
- (void)watchItem;

@end

