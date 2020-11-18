//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUIUtilities/AXDragEndpointVendorDelegate-Protocol.h>
#import <AccessibilityUIUtilities/AXDragSessionDragManager-Protocol.h>
#import <AccessibilityUIUtilities/NSXPCListenerDelegate-Protocol.h>

@class AXDragEndpointVendor, NSMutableArray, NSString, NSXPCListener;
@protocol AXDragManagerDelegate;

@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager>
{
    AXDragEndpointVendor *_vendor;
    NSXPCListener *_endpointListener;
    NSMutableArray *_activeSessions;
    id<AXDragManagerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AXDragManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)endpointForRequestingConnection:(id)arg1 fromEndpointVendor:(id)arg2;
- (id)initWithMachServiceName:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)sessionWasTerminated:(id)arg1;

@end
