//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest
{
    BOOL _force;
    NSString *_destinationName;
    NSString *_destinationDeviceID;
    NSString *_password;
    double _scanWaitInterval;
}

@property (copy, nonatomic) NSString *destinationDeviceID; // @synthesize destinationDeviceID=_destinationDeviceID;
@property (copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property (nonatomic) BOOL force; // @synthesize force=_force;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (nonatomic) double scanWaitInterval; // @synthesize scanWaitInterval=_scanWaitInterval;

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

