//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle
{
    NSUUID *_deviceIdentifier;
}

@property (readonly, copy) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;

+ (BOOL)isValidDestination:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocal;
- (id)privateDescription;

@end

