//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFControlGroupIdentifier.h>

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier
{
    unsigned int _leaderIP;
}

@property (readonly, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic) unsigned int leaderIP; // @synthesize leaderIP=_leaderIP;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned int)arg3;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToControlSessionIdentifier:(id)arg1;
- (id)stringValue;

@end

