//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSSet;
@protocol IAPNavigationDelegate, OS_dispatch_queue, OS_xpc_object;

@interface IAPNavigation : NSObject
{
    struct __CFNotificationCenter *_darwinNotificationCenter;
    NSNotificationCenter *_localNotificationCenter;
    BOOL _connected;
    id<IAPNavigationDelegate> _delegate;
    NSSet *_availableAccessories;
    NSObject<OS_xpc_object> *_iap2d_connection;
    NSObject<OS_dispatch_queue> *_processingQ;
}

@property (strong) NSSet *availableAccessories; // @synthesize availableAccessories=_availableAccessories;
@property BOOL connected; // @synthesize connected=_connected;
@property (weak) id<IAPNavigationDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong) NSObject<OS_xpc_object> *iap2d_connection; // @synthesize iap2d_connection=_iap2d_connection;
@property (strong) NSObject<OS_dispatch_queue> *processingQ; // @synthesize processingQ=_processingQ;

- (void).cxx_destruct;
- (id)_convert_xpc_array_to_NSArray:(id)arg1;
- (void)_getConnectedAccessories;
- (void)_iap2d_server_did_die;
- (void)_iap2d_server_did_launch;
- (void)_updateInternalStateWithArrayOfAccessories:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)updateNavigationGuidanceInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3;
- (void)updateNavigationManeuverInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3;

@end
