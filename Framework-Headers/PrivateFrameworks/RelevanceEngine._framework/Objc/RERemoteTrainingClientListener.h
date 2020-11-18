//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, RERemoteTrainingClientListenerDelegate;

@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    id<RERemoteTrainingClientListenerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RERemoteTrainingClientListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

