//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCInterface;

@interface MSXPCService : NSObject
{
    NSLock *_lock;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCConnection *_connection;
    BOOL _shouldLaunchMobileMail;
}

@property (nonatomic) BOOL shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;

- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)newConnectionForInterface:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end

