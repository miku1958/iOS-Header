//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPersistentStoreCoordinator, NSString;
@protocol OS_dispatch_queue;

@interface RTPersistenceContainer : NSObject
{
    NSArray *_configurations;
    BOOL _serveContexts;
    BOOL _setupFailed;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_contextRequestsQueue;
    NSPersistentStoreCoordinator *_coordinator;
}

@property (strong) NSObject<OS_dispatch_queue> *contextRequestsQueue; // @synthesize contextRequestsQueue=_contextRequestsQueue;
@property (strong) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property (readonly) NSString *name; // @synthesize name=_name;
@property BOOL serveContexts; // @synthesize serveContexts=_serveContexts;
@property BOOL setupFailed; // @synthesize setupFailed=_setupFailed;
@property (readonly) BOOL storesNeedSetup;

- (void).cxx_destruct;
- (id)_persistenceContext;
- (BOOL)_validateConfigurations:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 model:(id)arg2 configurations:(id)arg3;
- (id)persistenceContext;
- (void)persistenceContextWithHandler:(CDUnknownBlockType)arg1;
- (id)persistenceContextWithOptions:(long long)arg1;
- (void)resumePersistenceStores;
- (void)setupPersistenceStores;
- (void)suspendPersistenceStores;
- (id)tearDownPersistenceStack;
- (BOOL)updateContainerConfigurations:(id)arg1;
- (id)waitForPersistenceContext;

@end
