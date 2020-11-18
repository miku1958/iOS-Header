//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol _HKXPCExportable;

@interface _HKXPCConnection : NSObject
{
    NSXPCConnection *_underlyingConnection;
    id<_HKXPCExportable> _exportedObject;
    NSString *_debugIdentifier;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property (weak, nonatomic) id<_HKXPCExportable> exportedObject; // @synthesize exportedObject=_exportedObject;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)initWithUnderlyingConnection:(id)arg1;
- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)resume;

@end

