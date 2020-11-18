//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GestureServer/NSXPCListenerDelegate-Protocol.h>
#import <GestureServer/_UIGestureRecognizerServerInterface-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface _UIGestureRecognizerServer : NSObject <NSXPCListenerDelegate, _UIGestureRecognizerServerInterface>
{
    NSMutableSet *_contextReuseQueue;
    NSMapTable *_contextToStateMap;
    NSMutableDictionary *_handEventToHitContextsMap;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedServer;
- (void)_queue_enumerateContextStatesWithBlock:(CDUnknownBlockType)arg1;
- (long long)_queue_gestureRecognizersCanBeginGivenAncestorsOfContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
- (long long)_queue_gestureRecognizersCanBeginGivenDescendantsOfContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2 ancestorGestureRecognizerState:(long long)arg3 lastTouchTimestamp:(double)arg4;
- (void)_queue_removeGestureRecognizerStateForContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
- (id)_queue_stateForContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2 createIfMissing:(BOOL)arg3;
- (long long)_queue_touchDeliveryStateForContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
- (void)_queue_touchesWithInitialTouchTimestamp:(double)arg1 wereDeliveredToContexts:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)ipc_removeGestureRecognizerStateForContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
- (void)ipc_requestGestureRecognizerInstructionForContextID:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2 reply:(CDUnknownBlockType)arg3;
- (void)ipc_setGestureRecognizerState:(long long)arg1 forGestureRecognizersInContextId:(unsigned int)arg2 affectingContextId:(unsigned int)arg3 withInitialTouchTimestamp:(double)arg4 lastTouchTimestamp:(double)arg5;
- (void)ipc_setGestureRecognizerState:(long long)arg1 forGestureRecognizersInContextId:(unsigned int)arg2 withInitialTouchTimestamp:(double)arg3 lastTouchTimestamp:(double)arg4;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;
- (void)touchesWithInitialTouchTimestamp:(double)arg1 wereDeliveredToContexts:(unsigned int *)arg2 count:(unsigned char)arg3;

@end
