//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKDeviceSyncRegistry;

@protocol NNMKDeviceRegistryHolder <NSObject>
- (NNMKDeviceSyncRegistry *)currentDeviceRegistry;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;
- (BOOL)pairedDeviceSupportsStandaloneMode;
@end
