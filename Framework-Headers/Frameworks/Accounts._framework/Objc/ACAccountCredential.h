//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/ACProtobufCoding-Protocol.h>
#import <Accounts/NSCoding-Protocol.h>
#import <Accounts/NSCopying-Protocol.h>
#import <Accounts/NSSecureCoding-Protocol.h>

@class ACAccount, NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_credentialItems;
    NSString *_credentialType;
    NSMutableSet *_dirtyProperties;
    ACAccount *_owningAccount;
    BOOL _requiresTouchID;
    BOOL _dirty;
    BOOL _empty;
}

@property (copy, nonatomic) NSString *credentialType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property (readonly, nonatomic) NSSet *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property (nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property (strong, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *findMyiPhoneToken;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *hsaToken;
@property (copy, nonatomic) NSString *mapsToken;
@property (copy, nonatomic) NSString *oauthRefreshToken;
@property (copy, nonatomic) NSString *oauthToken;
@property (copy, nonatomic) NSString *oauthTokenNoSync;
@property (copy, nonatomic) NSString *oauthTokenSecret;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL requiresTouchID; // @synthesize requiresTouchID=_requiresTouchID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDate *tokenExpiryDate;

+ (id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1;
+ (id)allSupportedKeys;
+ (id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
+ (id)credentialWithPassword:(id)arg1;
+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_clearDirtyProperties;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setOwningAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)credentialItemForKey:(id)arg1;
- (id)credentialItems;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
- (id)initWithPassword:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)keysForCredentialItems;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;

@end

