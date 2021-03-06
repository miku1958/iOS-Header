//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CATEndPoint;
@protocol CATSocketDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CATSocket : NSObject
{
    BOOL mIsInvalid;
    int mState;
    int _nativeSocket;
    id<CATSocketDelegate> _delegate;
    CATEndPoint *_localEndPoint;
    CATEndPoint *_remoteEndPoint;
    NSObject<OS_dispatch_source> *_socketSource;
    NSObject<OS_dispatch_queue> *_socketQueue;
    NSObject<OS_dispatch_queue> *_userQueue;
}

@property (weak, nonatomic) id<CATSocketDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) CATEndPoint *localEndPoint; // @synthesize localEndPoint=_localEndPoint;
@property (nonatomic) int nativeSocket; // @synthesize nativeSocket=_nativeSocket;
@property (readonly, nonatomic) CATEndPoint *remoteEndPoint; // @synthesize remoteEndPoint=_remoteEndPoint;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *socketQueue; // @synthesize socketQueue=_socketQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *userQueue; // @synthesize userQueue=_userQueue;

- (void).cxx_destruct;
- (void)acceptPendingConnection;
- (BOOL)connectToEndPoint:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)delegateDidClose;
- (void)delegateDidConnect;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidReceiveData:(id)arg1;
- (BOOL)delegateShouldAcceptNewSocket:(id)arg1;
- (id)init;
- (id)initWithNativeSocket:(int)arg1;
- (void)invalidate;
- (BOOL)listenWithEndPoint:(id)arg1 error:(id *)arg2;
- (void)populateLocalEndPoint;
- (void)populateRemoteEndPoint;
- (void)resume;
- (void)socketDidCancel;
- (void)socketDidConnect;
- (void)socketDidFailWithError:(id)arg1;
- (void)socketDidReceiveData;
- (void)socketDidReceiveEvent;
- (void)socketDidReceiveListeningEvent;
- (void)suspend;

@end

