//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRExternalDeviceController, MRTransportExternalDevice;

@protocol MRExternalDeviceControllerDelegate <NSObject>

@optional
- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didDiscoverDevice:(MRTransportExternalDevice *)arg2;
- (void)externalDeviceController:(MRExternalDeviceController *)arg1 didRemoveDevice:(MRTransportExternalDevice *)arg2;
@end

