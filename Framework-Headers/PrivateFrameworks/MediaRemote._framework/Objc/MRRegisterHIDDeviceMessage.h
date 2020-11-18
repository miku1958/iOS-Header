//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage
{
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;
}

@property (readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor;

- (void)dealloc;
- (id)initWithDeviceDescriptor:(id)arg1;
- (unsigned long long)type;

@end

