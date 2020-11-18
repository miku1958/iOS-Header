//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSString;
@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertion : NSObject
{
    BOOL _isActive;
    NRDevice *_device;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NRDevice *device; // @synthesize device=_device;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (void)invalidate;

@end

