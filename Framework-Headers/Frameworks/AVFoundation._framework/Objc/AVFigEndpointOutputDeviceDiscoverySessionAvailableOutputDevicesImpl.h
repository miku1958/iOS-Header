//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl-Protocol.h>

@class NSArray, NSString;

@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl>
{
    NSArray *_figEndpoints;
}

@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (id)initWithAvailableFigEndpoints:(id)arg1;

@end

