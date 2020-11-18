//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBClientHandle;

@interface CallHistoryDBClientHandleManager : CHSynchronizedLoggable
{
    CallHistoryDBClientHandle *_clientDBHandle;
}

@property (weak) CallHistoryDBClientHandle *clientDBHandle; // @synthesize clientDBHandle=_clientDBHandle;

+ (id)instance;
- (void).cxx_destruct;
- (id)getDatabaseHandle;
- (id)getDatabaseHandleSync;
- (id)init;

@end
