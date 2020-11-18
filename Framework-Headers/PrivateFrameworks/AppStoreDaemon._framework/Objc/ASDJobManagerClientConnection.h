//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;
@protocol ASDJobManagerClient;

@interface ASDJobManagerClientConnection : NSObject
{
    NSXPCConnection *_connection;
    id<ASDJobManagerClient> _delegate;
    BOOL _invalidated;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (void)_call:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)didChangeJobs:(id)arg1;
- (void)didCompleteJobs:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (void)didUpdateStates:(id)arg1;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (void)invalidate;

@end

