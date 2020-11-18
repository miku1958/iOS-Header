//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCSyncContext, PQLResultSet;

__attribute__((visibility("hidden")))
@interface BRCFSDownloaderBatchEnumerator : NSObject
{
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
    BRCSyncContext *_syncContext;
}

@property (readonly, nonatomic) BRCSyncContext *syncContext; // @synthesize syncContext=_syncContext;

- (void).cxx_destruct;
- (void)close;
- (id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long *)arg4;
- (id)nextItemAndStageID:(id *)arg1 etag:(id *)arg2;

@end

