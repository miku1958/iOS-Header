//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (id)remoteObjectProxy:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxy:(CDUnknownBlockType)arg1;

@end

