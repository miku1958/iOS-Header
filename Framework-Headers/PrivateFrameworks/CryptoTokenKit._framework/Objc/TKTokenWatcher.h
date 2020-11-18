//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolTokenWatcher-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher>
{
    NSXPCConnection *_connection;
    NSMutableArray *_tokenIDs;
    NSMutableDictionary *_removalHandlers;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    CDUnknownBlockType _insertionHandler;
}

@property (readonly) NSArray *tokenIDs; // @synthesize tokenIDs=_tokenIDs;

- (void).cxx_destruct;
- (void)addRemovalHandler:(CDUnknownBlockType)arg1 forTokenID:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithInsertionHandler:(CDUnknownBlockType)arg1;
- (void)insertedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removedToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setup;

@end

