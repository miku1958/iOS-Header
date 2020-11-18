//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _groupID;
    NSUUID *_organizationUUID;
}

@property unsigned short groupID; // @synthesize groupID=_groupID;
@property (copy) NSUUID *organizationUUID; // @synthesize organizationUUID=_organizationUUID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToGroupIdentifier:(id)arg1;
- (id)stringValue;

@end
