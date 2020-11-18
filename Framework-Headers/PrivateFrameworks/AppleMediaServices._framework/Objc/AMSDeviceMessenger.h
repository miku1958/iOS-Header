//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSDeviceMessengerClientInterface-Protocol.h>

@class AMSDaemonConnection, NSMutableArray, NSString;
@protocol AMSDeviceMessengerServiceInterface, OS_dispatch_queue;

@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface>
{
    id<AMSDeviceMessengerServiceInterface> _proxyObject;
    AMSDaemonConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_updateHandlers;
}

@property (strong, nonatomic) AMSDaemonConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *updateHandlers; // @synthesize updateHandlers=_updateHandlers;

- (void).cxx_destruct;
- (id)_getProxyObject;
- (id)_identifierFromDialogRequest:(id)arg1;
- (void)_sendDelegateUpdateForMessage:(id)arg1;
- (void)addUpdateHandlerForType:(long long)arg1 filter:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)clearDialog:(id)arg1;
- (void)deviceMessengerDidClearMessage:(id)arg1;
- (void)deviceMessengerDidReceiveMessage:(id)arg1;
- (void)deviceMessengerDidReceiveReply:(id)arg1;
- (void)deviceMessengerDidUpdateDevices;
- (id)dialogsWithFilter:(id)arg1;
- (id)init;
- (id)sendDialog:(id)arg1 account:(id)arg2;

@end
