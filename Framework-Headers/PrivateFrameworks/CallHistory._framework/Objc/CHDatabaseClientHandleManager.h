//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBClientHandle;

__attribute__((visibility("hidden")))
@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable
{
    CallHistoryDBClientHandle *_databaseClientHandle;
}

@property (readonly, weak, nonatomic) CallHistoryDBClientHandle *databaseClientHandle; // @synthesize databaseClientHandle=_databaseClientHandle;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;

@end

