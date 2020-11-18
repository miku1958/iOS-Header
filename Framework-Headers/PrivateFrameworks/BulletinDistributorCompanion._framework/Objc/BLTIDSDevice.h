//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTAbstractIDSDevice-Protocol.h>

@class IDSDevice, NSString;

@interface BLTIDSDevice : NSObject <BLTAbstractIDSDevice>
{
    IDSDevice *_device;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIDSDevice:(id)arg1;

@end

