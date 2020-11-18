//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIEventFetcherSink-Protocol.h>

@class UIEventEnvironment, UIEventFetcher;

__attribute__((visibility("hidden")))
@interface UIEventDispatcher : NSObject <UIEventFetcherSink>
{
    UIEventEnvironment *_mainEnvironment;
    UIEventFetcher *_eventFetcher;
    struct __CFRunLoopSource *_handleEventQueueRunLoopSource;
    struct __CFRunLoopSource *_collectHIDEventsRunLoopSource;
    struct __CFRunLoop *_runLoop;
}

@property (strong, nonatomic) UIEventEnvironment *mainEnvironment; // @synthesize mainEnvironment=_mainEnvironment;

- (void).cxx_destruct;
- (void)_installEventRunLoopSources:(struct __CFRunLoop *)arg1;
- (void)dealloc;
- (void)eventFetcherDidReceiveEvents:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (void)signalNextDelivery;

@end

