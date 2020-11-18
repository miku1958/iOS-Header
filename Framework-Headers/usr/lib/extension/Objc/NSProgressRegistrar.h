//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSProgressRegistrar-Protocol.h>
#import <extension/NSXPCListenerDelegate-Protocol.h>

@class NSFileAccessNode, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_publishersByID;
    NSMutableDictionary *_subscribersByID;
    NSFileAccessNode *_rootFileAccessNode;
    NSMutableSet *_pendingFileSubscriberIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_getRemoteProcessWithIdentifier:(int)arg1 canReadItemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4;
- (oneway void)removePublisherForID:(id)arg1;
- (oneway void)removeSubscriberForID:(id)arg1;

@end

