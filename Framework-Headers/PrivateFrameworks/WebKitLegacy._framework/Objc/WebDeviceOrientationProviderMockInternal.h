//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject
{
    struct unique_ptr<WebCore::DeviceOrientationClientMock, std::__1::default_delete<WebCore::DeviceOrientationClientMock>> m_core;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)lastOrientation;
- (void)setController:(struct DeviceOrientationController *)arg1;
- (void)setOrientation:(id)arg1;
- (void)startUpdating;
- (void)stopUpdating;

@end

