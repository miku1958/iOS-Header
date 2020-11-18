//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEORequestCountPowerLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_eventName;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
}

+ (id)sharedInstance;
+ (BOOL)shouldIgnoreRequestType:(unsigned char)arg1 fromClientWithId:(id)arg2;
- (void)_cancelXpcActivity;
- (void)_flushToPowerLog;
- (void)_scheduleXpcActivity;
- (void)dealloc;
- (void)incrementCountForClient:(id)arg1 requestType:(unsigned char)arg2;
- (id)init;
- (void)startNewSessionWithName:(id)arg1;

@end

