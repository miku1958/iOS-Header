//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSUUID;

@interface CRKIdentityServiceFetchOrganizationUUIDResultObject : CATTaskResultObject
{
    NSUUID *_organizationUUID;
}

@property (copy, nonatomic) NSUUID *organizationUUID; // @synthesize organizationUUID=_organizationUUID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

