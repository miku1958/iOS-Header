//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSXPCListenerDelegate-Protocol.h>
#import <UIKitCore/_DUIClientSystemApp-Protocol.h>

@class NSMapTable, NSSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, UIDraggingSystemMonitorDelegate;

@interface UIDraggingSystemMonitor : NSObject <NSXPCListenerDelegate, _DUIClientSystemApp>
{
    NSXPCListener *_systemListener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMapTable *_sessionsBySessionInfo;
    id<UIDraggingSystemMonitorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIDraggingSystemMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *sessions;
@property (readonly) Class superclass;

+ (id)new;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (oneway void)dragDidBeginWithSystemSession:(id)arg1 info:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)dragDidEndWithSystemSession:(id)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)sessionForDropSession:(id)arg1;
- (void)xpcQueue_acceptNewConnection:(id)arg1;
- (BOOL)xpcQueue_shouldAcceptNewConnection:(id)arg1;

@end

