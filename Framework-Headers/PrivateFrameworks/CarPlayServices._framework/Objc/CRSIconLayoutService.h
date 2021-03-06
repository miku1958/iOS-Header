//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/BSInvalidatable-Protocol.h>
#import <CarPlayServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <CarPlayServices/CRSIconLayoutClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSHashTable, NSString;
@protocol CRSIconLayoutServiceDelegate, OS_dispatch_queue;

@interface CRSIconLayoutService : NSObject <BSServiceConnectionListenerDelegate, CRSIconLayoutClientToServerInterface, BSInvalidatable>
{
    id<CRSIconLayoutServiceDelegate> _delegate;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSHashTable *_connections;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property (strong, nonatomic) NSHashTable *connections; // @synthesize connections=_connections;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CRSIconLayoutServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchIconStateForVehicleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)resetIconStateForVehicleID:(id)arg1;
- (void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleID:(id)arg3;

@end

