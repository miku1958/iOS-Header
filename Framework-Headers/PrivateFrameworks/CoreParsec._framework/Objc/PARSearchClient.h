//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/PARClientXPC-Protocol.h>

@class NSMutableArray, NSXPCConnection, NSXPCListenerEndpoint, PARImageLoader, PARSessionConfiguration, QueryIdMapper;
@protocol OS_dispatch_queue, PARDaemonXPC;

@interface PARSearchClient : NSObject <PARClientXPC>
{
    id<PARDaemonXPC> _remoteObject;
    NSMutableArray *_sessions;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _configured;
    NSObject<OS_dispatch_queue> *_idQueue;
    QueryIdMapper *_idMapper;
    PARSessionConfiguration *_configuration;
    NSXPCConnection *_connection;
    PARImageLoader *_imageLoader;
}

@property (strong) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong) NSXPCListenerEndpoint *endpoint;
@property (readonly) PARImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;

+ (id)_deafListenerEndpoint;
+ (id)daemonConnection;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (unsigned long long)_queryId:(unsigned long long)arg1 forObject:(id)arg2;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)addSession:(id)arg1;
- (void)bag:(CDUnknownBlockType)arg1;
- (void)bagDidLoad:(id)arg1 error:(id)arg2;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)configure;
- (void)dealloc;
- (void)didDeleteResource:(id)arg1;
- (void)didDownloadResource:(id)arg1;
- (void)feedback:(CDUnknownBlockType)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getImageMap:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (void)listSessions:(CDUnknownBlockType)arg1;
- (void)listenToFlusher:(CDUnknownBlockType)arg1;
- (void)reportFeedback:(id)arg1 queryId:(unsigned long long)arg2;
- (unsigned long long)request:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;

@end
