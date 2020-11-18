//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPServer : NSObject
{
    int _listenSocket;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_source> *_serverSource;
    NSMutableArray *_connections;
    id<_RWITCPServerDelegate> _delegate;
}

@property (readonly, weak, nonatomic) id<_RWITCPServerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (BOOL)_createListenDispatchSource;
- (id)_initWithDelegate:(id)arg1;
- (BOOL)_listenOnLaunchdProvidedSocket:(const char *)arg1;
- (BOOL)_listenOnPort:(unsigned short)arg1;
- (void)connectionClosed:(id)arg1;
- (void)dealloc;
- (id)initWithLaunchdSocketName:(const char *)arg1 delegate:(id)arg2;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;

@end

