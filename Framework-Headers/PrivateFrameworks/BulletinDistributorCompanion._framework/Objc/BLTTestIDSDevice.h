//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTAbstractIDSDevice-Protocol.h>

@class NSString;

@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice>
{
    BOOL _isDefaultPairedDevice;
    BOOL _isNearby;
    BOOL _isConnected;
    BOOL _isCloudReachable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCloudReachable; // @synthesize isCloudReachable=_isCloudReachable;
@property (nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
@property (nonatomic) BOOL isDefaultPairedDevice; // @synthesize isDefaultPairedDevice=_isDefaultPairedDevice;
@property (nonatomic) BOOL isNearby; // @synthesize isNearby=_isNearby;
@property (readonly) Class superclass;


@end

