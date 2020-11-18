//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, CKUserIdentityLookupInfo, NSData, NSPersonNameComponents, NSString;

@interface CKUserIdentity : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _hasiCloudAccount;
    BOOL _isCached;
    CKUserIdentityLookupInfo *_lookupInfo;
    NSPersonNameComponents *_nameComponents;
    CKRecordID *_userRecordID;
    NSData *_publicSharingKey;
    unsigned long long _publicKeyVersion;
    NSData *_outOfNetworkPrivateKey;
    NSData *_encryptedPersonalInfo;
    NSString *_firstName;
    NSString *_lastName;
}

@property (strong, nonatomic) NSData *encryptedPersonalInfo; // @synthesize encryptedPersonalInfo=_encryptedPersonalInfo;
@property (readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (nonatomic) BOOL hasiCloudAccount; // @synthesize hasiCloudAccount=_hasiCloudAccount;
@property (nonatomic) BOOL isCached; // @synthesize isCached=_isCached;
@property (readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (copy, nonatomic) CKUserIdentityLookupInfo *lookupInfo; // @synthesize lookupInfo=_lookupInfo;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property (strong, nonatomic) NSData *outOfNetworkPrivateKey; // @synthesize outOfNetworkPrivateKey=_outOfNetworkPrivateKey;
@property (nonatomic) unsigned long long publicKeyVersion; // @synthesize publicKeyVersion=_publicKeyVersion;
@property (strong, nonatomic) NSData *publicSharingKey; // @synthesize publicSharingKey=_publicSharingKey;
@property (copy, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesToDescribe:(BOOL)arg1;
- (id)_init;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToUserIdentity:(id)arg1;
- (BOOL)isEquivalentToUserIdentityOrPublicKey:(id)arg1;
- (BOOL)isOutOfNetwork;

@end

