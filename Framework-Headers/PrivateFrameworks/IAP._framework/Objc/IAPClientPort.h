//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IAPClientPort : NSObject
{
    NSString *_uuid;
    CDUnknownBlockType _sendDataHandler;
    NSObject<OS_dispatch_queue> *_sendDataHandlerQueue;
    NSObject<OS_dispatch_queue> *_clientPortEventQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientPortEventQueue; // @synthesize clientPortEventQueue=_clientPortEventQueue;
@property (nonatomic) CDUnknownBlockType sendDataHandler; // @synthesize sendDataHandler=_sendDataHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sendDataHandlerQueue; // @synthesize sendDataHandlerQueue=_sendDataHandlerQueue;
@property (readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

- (void)dealloc;
- (id)initWithUUID:(id)arg1 queue:(id)arg2 sendHandler:(CDUnknownBlockType)arg3;

@end

