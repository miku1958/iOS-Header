//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSSecureCoding-Protocol.h>

@class ACAccountStore, NSDate, NSMutableSet, NSSet, NSString, NSURL;

@interface ACCredentialItem : NSObject <NSSecureCoding>
{
    NSString *_accountIdentifier;
    NSDate *_expirationDate;
    NSString *_serviceName;
    BOOL _persistent;
    NSURL *_objectID;
    ACAccountStore *_accountStore;
    NSMutableSet *_dirtyProperties;
}

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (weak, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, nonatomic) NSSet *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property (strong, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (strong, nonatomic) NSURL *objectID;
@property (nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) NSString *serviceName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_markPropertyDirty:(id)arg1;
- (void)clearDirtyProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1;
- (id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2;
- (BOOL)isPropertyDirty:(id)arg1;
- (void)markAllPropertiesDirty;
- (void)setAccountIdentifier:(id)arg1;
- (void)setServiceName:(id)arg1;

@end

