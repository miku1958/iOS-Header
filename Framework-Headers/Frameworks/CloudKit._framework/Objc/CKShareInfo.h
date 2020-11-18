//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKShareID, NSData, NSString;

@interface CKShareInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_container;
    long long _environment;
    CKShareID *_shareID;
    NSString *_etag;
    long long _participantType;
    long long _participantStatus;
    long long _participantPermission;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_iWorkDocumentName;
    NSData *_protectedFullToken;
    NSData *_publicToken;
    NSData *_privateToken;
    NSData *_publicProtectionData;
    NSString *_publicProtectionEtag;
}

@property (strong, nonatomic) NSString *container; // @synthesize container=_container;
@property (nonatomic) long long environment; // @synthesize environment=_environment;
@property (strong, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (strong, nonatomic) NSString *iWorkDocumentName; // @synthesize iWorkDocumentName=_iWorkDocumentName;
@property (strong, nonatomic) NSString *ownerFirstName; // @synthesize ownerFirstName=_ownerFirstName;
@property (strong, nonatomic) NSString *ownerLastName; // @synthesize ownerLastName=_ownerLastName;
@property (nonatomic) long long participantPermission; // @synthesize participantPermission=_participantPermission;
@property (nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property (nonatomic) long long participantType; // @synthesize participantType=_participantType;
@property (strong, nonatomic) NSData *privateToken; // @synthesize privateToken=_privateToken;
@property (strong, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property (strong, nonatomic) NSData *publicProtectionData; // @synthesize publicProtectionData=_publicProtectionData;
@property (strong, nonatomic) NSString *publicProtectionEtag; // @synthesize publicProtectionEtag=_publicProtectionEtag;
@property (strong, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property (strong, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
