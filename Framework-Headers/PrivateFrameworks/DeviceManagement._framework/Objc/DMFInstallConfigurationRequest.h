//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSDictionary, NSString;

@interface DMFInstallConfigurationRequest : DMFTaskRequest
{
    unsigned long long _type;
    NSString *_managingProfileIdentifier;
    NSDictionary *_profile;
}

@property (copy, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;
@property (copy, nonatomic) NSDictionary *profile; // @synthesize profile=_profile;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

