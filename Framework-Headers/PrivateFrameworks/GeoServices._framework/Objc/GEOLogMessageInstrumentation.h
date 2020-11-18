//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOLogMessageInstrumentation : NSObject
{
    NSMutableArray *_registeredEventNames;
    NSMutableDictionary *_msgCountForRegisteredEvents;
    NSObject<OS_dispatch_queue> *_instrumenationQueue;
    NSObject<OS_dispatch_source> *_logMessageInstrumentationFlushTimer;
    BOOL _exitWhenAllInstrumentationLogsFlushed;
    unsigned long long _logMessageNothingToFlushCounter;
    NSString *_msgCountUserDefaultsKey;
}

+ (id)createDefaultInstrumentation;
+ (id)defaultInstrumentation;
- (void)_registerEventName:(id)arg1;
- (void)captureLogMessage:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3;
- (void)captureLogMessageCollectionRequest:(id)arg1 forEventName:(id)arg2 fromLogFrameworkAdaptor:(BOOL)arg3;
- (void)captureLogMsgCountForEventName:(id)arg1 logMsgCount:(long long)arg2 fromLogFrameworkAdaptor:(BOOL)arg3;
- (void)dealloc;
- (void)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (id)init;
- (void)waitForEmptyInstrumentationQueue:(CDUnknownBlockType)arg1;

@end

