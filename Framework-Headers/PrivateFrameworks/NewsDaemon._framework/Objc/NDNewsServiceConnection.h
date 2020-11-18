//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsDaemon/NDNewsService-Protocol.h>
#import <NewsDaemon/NDNewsServiceClient-Protocol.h>

@class NSString, NSXPCConnection;
@protocol NDNewsService, NDNewsServiceClient, OS_dispatch_queue;

@interface NDNewsServiceConnection : NSObject <NDNewsServiceClient, NDNewsService>
{
    NSXPCConnection *_connection;
    id<NDNewsService> _daemon;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<NDNewsServiceClient> _client;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (weak, nonatomic) id<NDNewsServiceClient> client; // @synthesize client=_client;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) id<NDNewsService> daemon; // @synthesize daemon=_daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_establishConnectionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)fetchLatestResultsWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1;
- (void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)serviceHasNewTodayResults;

@end

