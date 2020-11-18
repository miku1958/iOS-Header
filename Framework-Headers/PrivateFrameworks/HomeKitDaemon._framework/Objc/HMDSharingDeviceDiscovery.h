//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSharingDeviceDiscovery-Protocol.h>

@class NSString, SFDeviceDiscovery;

@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery>
{
    SFDeviceDiscovery *_deviceDiscovery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (strong, nonatomic) SFDeviceDiscovery *deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)start;
- (void)stop;

@end

