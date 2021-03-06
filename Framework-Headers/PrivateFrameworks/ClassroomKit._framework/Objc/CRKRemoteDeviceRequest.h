//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSString;

@interface CRKRemoteDeviceRequest : CATTaskRequest
{
    NSString *_deviceIdentifier;
    CATTaskRequest *_remoteRequest;
}

@property (copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (strong, nonatomic) CATTaskRequest *remoteRequest; // @synthesize remoteRequest=_remoteRequest;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

