//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolTokenWatcher-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSXPCConnection, NSXPCListenerEndpoint;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher>
{
    NSXPCConnection *_connection;
    NSMutableArray *_tokenIDs;
    NSMutableDictionary *_removalHandlers;
    CDUnknownBlockType _insertionHandler;
}

@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSArray *tokenIDs;

- (void).cxx_destruct;
- (void)addRemovalHandler:(CDUnknownBlockType)arg1 forTokenID:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithInsertionHandler:(CDUnknownBlockType)arg1;
- (void)insertedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setInsertionHandler:(CDUnknownBlockType)arg1;
- (void)setupWithConnection:(id)arg1;

@end
