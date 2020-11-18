//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFUpdateAppRequest.h>

@class NSDictionary, NSString;

@interface DMFMDMv1UpdateAppRequest : DMFUpdateAppRequest
{
    NSString *_originator;
    unsigned long long _managementOptions;
    NSString *_VPNUUIDString;
    NSDictionary *_configuration;
}

@property (copy, nonatomic) NSString *VPNUUIDString; // @synthesize VPNUUIDString=_VPNUUIDString;
@property (copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property (nonatomic) unsigned long long managementOptions; // @synthesize managementOptions=_managementOptions;
@property (copy, nonatomic) NSString *originator; // @synthesize originator=_originator;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

