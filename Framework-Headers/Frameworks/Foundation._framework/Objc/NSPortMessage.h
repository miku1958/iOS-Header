//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPort;

@interface NSPortMessage : NSObject
{
    NSPort *localPort;
    NSPort *remotePort;
    NSMutableArray *components;
    unsigned int msgid;
    void *reserved2;
    void *reserved;
}

@property (readonly, copy) NSArray *components;
@property unsigned int msgid;
@property (readonly, strong) NSPort *receivePort;
@property (readonly, strong) NSPort *sendPort;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;
- (BOOL)sendBeforeDate:(id)arg1;

@end

