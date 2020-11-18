//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/NSXPCListenerDelegate-Protocol.h>

@class BBDataProviderConnectionResolver, NSMutableDictionary, NSString;
@protocol BBDataProviderConnectionServerProxy, OS_dispatch_queue;

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate>
{
    NSString *_serviceName;
    NSString *_bundleID;
    BBDataProviderConnectionResolver *_connectionResolver;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id<BBDataProviderConnectionServerProxy> _serverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BOOL _connected;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (id)_addDataProvider:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (id)addDataProvider:(id)arg1;
- (void)addDataProvider:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4;
- (id)bundleID;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)invalidate;
- (void)ping:(CDUnknownBlockType)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (id)serviceName;
- (void)setServerProxy:(id)arg1;

@end
