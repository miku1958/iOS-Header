//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCInterface;

@interface FMXPCServiceDescription : NSObject
{
    NSString *_machService;
    unsigned long long _options;
    NSObject *_exportedObject;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (strong, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property (strong, nonatomic) NSObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *machService; // @synthesize machService=_machService;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;

- (void).cxx_destruct;
- (id)initInternalWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteObjectInterface:(id)arg5 interruptionHandler:(CDUnknownBlockType)arg6 invalidationHandler:(CDUnknownBlockType)arg7;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteObjectInterface:(id)arg5 interruptionHandler:(CDUnknownBlockType)arg6 invalidationHandler:(CDUnknownBlockType)arg7;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 remoteObjectInterface:(id)arg3 interruptionHandler:(CDUnknownBlockType)arg4 invalidationHandler:(CDUnknownBlockType)arg5;

@end
