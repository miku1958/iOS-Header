//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol IDSGLSessionManagerDelegate;

@interface IDSGLSessionManager : NSObject
{
    id<IDSGLSessionManagerDelegate> _delegate;
    CDUnknownBlockType _sendBlock;
    CDUnknownBlockType _recvBlock;
    NSString *_sessionID;
    BOOL _isServer;
    int _zudpFd;
    int _connFd;
    int _streamFd;
    NSMutableArray *_serverDataBufferArray;
}

- (void).cxx_destruct;
- (void)_sendServerBufferedData;
- (BOOL)_startReliableClient;
- (BOOL)_startReliableServer;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 sendBlock:(CDUnknownBlockType)arg2 recvBlock:(CDUnknownBlockType)arg3 sessionID:(id)arg4;
- (void)invalidate;
- (void)recvGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)recvZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (long long)sendZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)setServerStreamFd:(int)arg1 isServer:(BOOL)arg2;
- (BOOL)startReliableSession:(BOOL)arg1;

@end

