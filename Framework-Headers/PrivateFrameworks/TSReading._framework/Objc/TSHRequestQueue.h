//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TSHConnectionFactory;

@interface TSHRequestQueue : NSObject
{
    unsigned long long mMaxConcurrentRequestCount;
    TSHConnectionFactory *mConnectionFactory;
    NSMutableArray *mRequestQueue;
    NSMutableArray *mActiveRequests;
}

- (void)addRequest:(id)arg1 delegate:(id)arg2;
- (void)addRequest:(id)arg1 dependsUpon:(id)arg2 delegate:(id)arg3;
- (void)addRequest:(id)arg1 dependsUpon:(id)arg2 delegate:(id)arg3 startRightAway:(BOOL)arg4;
- (void)cancelRequest:(id)arg1;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)dependantsOf:(id)arg1;
- (void)dequeueDependantsOf:(id)arg1;
- (void)doWork;
- (id)entryForConnection:(id)arg1;
- (id)entryForRequest:(id)arg1;
- (id)init;
- (BOOL)isBlocked:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isInactive;
- (unsigned long long)maxConcurrentRequestCount;
- (unsigned long long)nextUnblockedQueueEntryIndex;
- (id)requestForConnection:(id)arg1;
- (void)setConnectionFactory:(id)arg1;
- (void)setMaxConcurrentRequestCount:(unsigned long long)arg1;
- (void)startReadyRequests;
- (unsigned long long)unblockedQueuedRequestCount;
- (void)unregisterDelegate:(id)arg1;

@end
