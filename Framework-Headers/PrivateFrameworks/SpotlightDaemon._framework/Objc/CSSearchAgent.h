//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSSearchAgent : CSXPCConnection
{
    id<MDIndexer> _indexer;
    NSMutableDictionary *_searchConnections;
}

@property (strong, nonatomic) id<MDIndexer> indexer; // @synthesize indexer=_indexer;
@property (strong, nonatomic) NSMutableDictionary *searchConnections; // @synthesize searchConnections=_searchConnections;

+ (id)searchAgent;
+ (id)searchAgent:(BOOL)arg1 serviceName:(id)arg2;
- (void).cxx_destruct;
- (BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)arg1;
- (void)cancelQuery:(id)arg1;
- (void)cancelSimpleQuery:(id)arg1;
- (BOOL)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (void)handleEngagement:(id)arg1 forConnection:(id)arg2;
- (BOOL)lostClientConnection:(id)arg1 error:(id)arg2;
- (void)preheat:(id)arg1;
- (id)searchConnection:(id)arg1;
- (void)startQuery:(id)arg1;
- (void)startSimpleQuery:(id)arg1;

@end

