//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface WBSFormMetadata : NSObject <NSSecureCoding>
{
    NSNumber *_containsAtLeastOneSecureTextField;
    NSArray *_controls;
    BOOL _allowsAutocomplete;
    BOOL _containsActiveElement;
    BOOL _bestForCredentialPreFill;
    BOOL _bestForPageLevelAutoFill;
    BOOL _bestForStreamlinedLogin;
    BOOL _visible;
    BOOL _usesRelAsync;
    BOOL _usesGeneratedPassword;
    BOOL _isSearchForm;
    NSDictionary *_annotations;
    unsigned long long _type;
    NSString *_confirmPasswordElementUniqueID;
    NSString *_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
    NSURL *_action;
    long long _uniqueID;
    NSString *_oldPasswordElementUniqueID;
    NSString *_passwordElementUniqueID;
    NSString *_textSample;
    NSString *_userNameElementUniqueID;
    unsigned long long _requestType;
    NSDictionary *_passwordRequirements;
}

@property (readonly, nonatomic) NSURL *action; // @synthesize action=_action;
@property (readonly, nonatomic) BOOL allowsAutocomplete; // @synthesize allowsAutocomplete=_allowsAutocomplete;
@property (readonly, copy, nonatomic) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property (readonly, nonatomic, getter=isBestForCredentialPreFill) BOOL bestForCredentialPreFill; // @synthesize bestForCredentialPreFill=_bestForCredentialPreFill;
@property (readonly, nonatomic, getter=isBestForPageLevelAutoFill) BOOL bestForPageLevelAutoFill; // @synthesize bestForPageLevelAutoFill=_bestForPageLevelAutoFill;
@property (readonly, nonatomic, getter=isBestForStreamlinedLogin) BOOL bestForStreamlinedLogin; // @synthesize bestForStreamlinedLogin=_bestForStreamlinedLogin;
@property (readonly, copy, nonatomic) NSString *confirmPasswordElementUniqueID; // @synthesize confirmPasswordElementUniqueID=_confirmPasswordElementUniqueID;
@property (readonly, nonatomic) BOOL containsActiveElement; // @synthesize containsActiveElement=_containsActiveElement;
@property (readonly, nonatomic) BOOL containsAtLeastOneSecureTextField;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID; // @synthesize firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID=_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property (readonly, nonatomic) BOOL isSearchForm; // @synthesize isSearchForm=_isSearchForm;
@property (readonly, copy, nonatomic) NSString *oldPasswordElementUniqueID; // @synthesize oldPasswordElementUniqueID=_oldPasswordElementUniqueID;
@property (readonly, copy, nonatomic) NSString *passwordElementUniqueID; // @synthesize passwordElementUniqueID=_passwordElementUniqueID;
@property (copy, nonatomic) NSDictionary *passwordRequirements; // @synthesize passwordRequirements=_passwordRequirements;
@property (readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property (readonly, copy, nonatomic) NSString *textSample; // @synthesize textSample=_textSample;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property (readonly, copy, nonatomic) NSString *userNameElementUniqueID; // @synthesize userNameElementUniqueID=_userNameElementUniqueID;
@property (readonly, nonatomic) BOOL usesGeneratedPassword; // @synthesize usesGeneratedPassword=_usesGeneratedPassword;
@property (readonly, nonatomic) BOOL usesRelAsync; // @synthesize usesRelAsync=_usesRelAsync;
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)encodeWithCoder:(id)arg1;
- (id)formMetadataByReplacingControlsWith:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

