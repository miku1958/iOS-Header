//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject
{
    BOOL _connectionDidInterrupt;
    NSXPCConnection *_connection;
}

@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property BOOL connectionDidInterrupt; // @synthesize connectionDidInterrupt=_connectionDidInterrupt;

+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (void)initialize;
+ (id)remoteInterface;
- (void)datastoreListingWithReply:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)dumpClientsWithReply:(CDUnknownBlockType)arg1;
- (void)dumpConfigurationsWithReply:(CDUnknownBlockType)arg1;
- (void)dumpStateCacheWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)listClientsWithReply:(CDUnknownBlockType)arg1;
- (void)setupConnection;

@end

