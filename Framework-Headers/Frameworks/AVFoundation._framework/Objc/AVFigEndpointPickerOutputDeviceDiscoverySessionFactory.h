//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVOutputDeviceDiscoverySessionFactory-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVFigEndpointPickerOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2;

@end

