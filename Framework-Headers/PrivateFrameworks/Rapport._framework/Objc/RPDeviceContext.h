//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPDevice, RPLegacyDeviceDiscovery, RPLegacySession;

__attribute__((visibility("hidden")))
@interface RPDeviceContext : NSObject
{
    BOOL _reported;
    int _state;
    RPDevice *_device;
    RPLegacyDeviceDiscovery *_discovery;
    RPLegacySession *_session;
}

@property (strong, nonatomic) RPDevice *device; // @synthesize device=_device;
@property (strong, nonatomic) RPLegacyDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property (nonatomic) BOOL reported; // @synthesize reported=_reported;
@property (strong, nonatomic) RPLegacySession *session; // @synthesize session=_session;
@property (nonatomic) int state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)invalidate;
- (void)pairVerify;
- (void)systemInfoResponse:(id)arg1 error:(id)arg2;

@end
