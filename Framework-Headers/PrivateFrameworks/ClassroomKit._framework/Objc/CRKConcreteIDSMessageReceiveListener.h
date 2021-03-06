//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIDSListener-Protocol.h>
#import <ClassroomKit/IDSServiceDelegate-Protocol.h>

@class IDSService, NSString;

@interface CRKConcreteIDSMessageReceiveListener : NSObject <IDSServiceDelegate, CRKIDSListener>
{
    IDSService *_service;
    CDUnknownBlockType _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

+ (id)listenerWithService:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithService:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end

