//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/DNDModeAssertionInvalidation.h>

#import <DoNotDisturbServer/DNDSModernAssertionSourceResolution-Protocol.h>

@class NSString;

@interface DNDModeAssertionInvalidation (Resolution) <DNDSModernAssertionSourceResolution>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)predicateForModeAssertionInvalidationsWithAssertionClientIdentifiers:(id)arg1;
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;
@end
