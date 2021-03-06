//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, SFAppleIDContactInfo, SFAppleIDIdentity, SFAppleIDValidationRecord;

@interface SFAppleIDAccount : NSObject <NSSecureCoding>
{
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_certificateToken;
    NSDate *_certificateTokenCreationDate;
    SFAppleIDContactInfo *_contactInfo;
    NSDate *_creationDate;
    SFAppleIDIdentity *_identity;
    NSData *_privateKeyPersistentReference;
    SFAppleIDValidationRecord *_validationRecord;
}

@property (strong, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property (strong, nonatomic) NSString *certificateToken; // @synthesize certificateToken=_certificateToken;
@property (strong, nonatomic) NSDate *certificateTokenCreationDate; // @synthesize certificateTokenCreationDate=_certificateTokenCreationDate;
@property (strong, nonatomic) SFAppleIDContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property (readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong, nonatomic) SFAppleIDIdentity *identity; // @synthesize identity=_identity;
@property (strong, nonatomic) NSData *privateKeyPersistentReference; // @synthesize privateKeyPersistentReference=_privateKeyPersistentReference;
@property (strong, nonatomic) SFAppleIDValidationRecord *validationRecord; // @synthesize validationRecord=_validationRecord;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;

@end

