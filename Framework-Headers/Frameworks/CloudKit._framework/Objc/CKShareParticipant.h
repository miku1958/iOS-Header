//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, CKUserIdentity, NSData, NSString;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isCurrentUser;
    BOOL _createdInProcess;
    BOOL _acceptedInProcess;
    CKUserIdentity *_userIdentity;
    long long _type;
    long long _acceptanceStatus;
    long long _permission;
    NSString *_participantID;
    CKRecordID *_shareRecordID;
    NSString *_inviterID;
    CKUserIdentity *_originalUserIdentity;
    long long _originalParticipantType;
    long long _originalAcceptanceStatus;
    long long _originalPermission;
    NSData *_protectionInfo;
    NSData *_encryptedPersonalInfo;
}

@property (nonatomic) long long acceptanceStatus; // @synthesize acceptanceStatus=_acceptanceStatus;
@property (nonatomic) BOOL acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property (nonatomic) BOOL createdInProcess; // @synthesize createdInProcess=_createdInProcess;
@property (strong, nonatomic) NSData *encryptedPersonalInfo; // @synthesize encryptedPersonalInfo=_encryptedPersonalInfo;
@property (strong, nonatomic) NSString *inviterID; // @synthesize inviterID=_inviterID;
@property (nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property (nonatomic) long long originalAcceptanceStatus; // @synthesize originalAcceptanceStatus=_originalAcceptanceStatus;
@property (nonatomic) long long originalParticipantType; // @synthesize originalParticipantType=_originalParticipantType;
@property (nonatomic) long long originalPermission; // @synthesize originalPermission=_originalPermission;
@property (strong, nonatomic) CKUserIdentity *originalUserIdentity; // @synthesize originalUserIdentity=_originalUserIdentity;
@property (strong, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property (nonatomic) long long permission; // @synthesize permission=_permission;
@property (strong, nonatomic) NSData *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property (strong, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) CKUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)_initWithUserIdentity:(id)arg1;
- (void)_stripPersonalInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;

@end

