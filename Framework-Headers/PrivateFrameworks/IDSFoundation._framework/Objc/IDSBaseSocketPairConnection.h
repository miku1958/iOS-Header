//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMWeakReference, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSBaseSocketPairConnection : NSObject
{
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    int _connectedSocket;
    double _lastDateCheck;
    long long _bytesReceived;
    double _prevBPS;
    BOOL _writeSourceIsResumed;
}

@property (readonly, nonatomic) int socket; // @synthesize socket=_connectedSocket;

- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_processBytesAvailable;
- (void)_sendToConnectedSocket;
- (void)_setupWriteSource;
- (void)dealloc;
- (void)endSession;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(BOOL)arg4;
- (BOOL)sendData:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)start;

@end

