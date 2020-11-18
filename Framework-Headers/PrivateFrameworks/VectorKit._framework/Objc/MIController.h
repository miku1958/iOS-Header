//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKMapViewDelegate-Protocol.h>

@class NSString, VKMapView;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MIController : NSObject <VKMapViewDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    VKMapView *_mapView;
    struct shared_ptr<MITManager> _mitManager;
    BOOL _isActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property (readonly) Class superclass;

+ (id)sharedController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activateController:(id)arg1;
- (void)deactivateController;
- (void)decodeMITreeData:(id)arg1;
- (void)handleXPCEvent:(id)arg1;
- (id)init;
- (void)mapLayer:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)recievedData:(id)arg1;
- (void)sendData:(id)arg1;
- (BOOL)takeMITSnapshot:(out id *)arg1;

@end

