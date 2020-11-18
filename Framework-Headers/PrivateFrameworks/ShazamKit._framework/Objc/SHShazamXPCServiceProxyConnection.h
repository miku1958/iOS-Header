//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHXPCServiceProxy-Protocol.h>

@class NSXPCConnection;
@protocol SHXPCFrameworkProxy, SHXPCServiceProxy;

__attribute__((visibility("hidden")))
@interface SHShazamXPCServiceProxyConnection : NSObject <SHXPCServiceProxy>
{
    id<SHXPCFrameworkProxy> _matcherDelegate;
    NSXPCConnection *_connection;
    id<SHXPCServiceProxy> _proxy;
    CDUnknownBlockType _connectionErrorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (copy, nonatomic) CDUnknownBlockType connectionErrorHandler; // @synthesize connectionErrorHandler=_connectionErrorHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (weak, nonatomic) id<SHXPCFrameworkProxy> matcherDelegate; // @synthesize matcherDelegate=_matcherDelegate;
@property (strong, nonatomic) id<SHXPCServiceProxy> proxy; // @synthesize proxy=_proxy;

- (void).cxx_destruct;
- (void)attachDefaultConnectionHandlers;
- (void)dealloc;
- (void)setErrorHandlers;
- (void)startRecognitionForRequest:(id)arg1;
- (oneway void)stopRecognition;

@end
