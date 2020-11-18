//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _canCreateContacts;
    BOOL _canDeleteContacts;
    BOOL _canCreateGroups;
}

@property (readonly, nonatomic) BOOL canCreateContacts; // @synthesize canCreateContacts=_canCreateContacts;
@property (readonly, nonatomic) BOOL canCreateGroups; // @synthesize canCreateGroups=_canCreateGroups;
@property (readonly, nonatomic) BOOL canDeleteContacts; // @synthesize canDeleteContacts=_canDeleteContacts;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCanCreateContacts:(BOOL)arg1 canDeleteContacts:(BOOL)arg2 canCreateGroups:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

