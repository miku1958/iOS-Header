//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/NSXPCListenerDelegate-Protocol.h>

@class BLTBulletinDistributorSubscriberList, NSString, NSXPCListener;
@protocol BLTBulletinDistributorSubscriberDeviceDelegate;

@interface BLTPingSubscriberManager : NSObject <NSXPCListenerDelegate>
{
    BLTBulletinDistributorSubscriberList *_subscribers;
    NSXPCListener *_listener;
    id<BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate; // @synthesize deviceDelegate=_deviceDelegate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property (strong, nonatomic) BLTBulletinDistributorSubscriberList *subscribers; // @synthesize subscribers=_subscribers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadPingSubscriberBundles:(id)arg1;
- (id)initWithDeviceDelegate:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
