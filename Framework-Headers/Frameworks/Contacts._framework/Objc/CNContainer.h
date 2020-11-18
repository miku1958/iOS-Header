//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNContainerPermissions, NSString;

@interface CNContainer : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_accountIdentifier;
    NSString *_name;
    long long _type;
    CNContainer *_snapshot;
    CNContainerPermissions *_permissions;
    int _iOSLegacyIdentifier;
    BOOL _enabled;
}

@property (readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) CNContainerPermissions *permissions; // @synthesize permissions=_permissions;
@property (readonly, copy, nonatomic) CNContainer *snapshot;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)identifierProvider;
+ (id)makeDefaultContainerPermissions;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForContainerOfContactWithIdentifier:(id)arg1;
+ (id)predicateForContainerOfGroupWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(BOOL)arg2;
+ (id)predicateForContainersIncludingDisabled:(BOOL)arg1;
+ (id)predicateForContainersWithIdentifiers:(id)arg1;
+ (id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1;
+ (id)predicateForLocalContainer;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionForContainerType:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 name:(id)arg3 type:(long long)arg4 permissions:(id)arg5;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

