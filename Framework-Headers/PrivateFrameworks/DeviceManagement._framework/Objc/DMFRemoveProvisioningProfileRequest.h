//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest
{
    NSString *_profileIdentifier;
    NSString *_managingProfileIdentifier;
}

@property (copy, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;
@property (copy, nonatomic) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

