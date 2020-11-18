//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSMutableCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface WBSFormControlMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_addressBookLabel;
    NSString *_associatedUsername;
    NSString *_fieldClass;
    NSString *_fieldID;
    NSString *_fieldName;
    NSString *_tagName;
    NSString *_uniqueID;
    NSString *_nextControlUniqueID;
    NSString *_value;
    NSString *_passwordRules;
    NSDictionary *_radioButtonInfo;
    NSDictionary *_annotations;
    NSArray *_selectElementInfo;
    NSArray *_autocompleteTokens;
    double _rectLeft;
    double _rectTop;
    double _rectWidth;
    double _rectHeight;
    CDUnion_a3b3b741 _flags;
    int _size;
    int _maxLength;
    int _minLength;
    int _selectionStart;
    int _selectionLength;
    int _autoFillButtonType;
    int _lastAutoFillButtonType;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *addressBookLabel; // @synthesize addressBookLabel=_addressBookLabel;
@property (readonly, copy, nonatomic) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property (readonly, copy, nonatomic) NSString *associatedUsername; // @synthesize associatedUsername=_associatedUsername;
@property (readonly, nonatomic) long long autoFillButtonType;
@property (readonly, nonatomic, getter=isAutoFilledTextField) BOOL autoFilledTextField;
@property (readonly, copy, nonatomic) NSArray *autocompleteTokens; // @synthesize autocompleteTokens=_autocompleteTokens;
@property (readonly, nonatomic) BOOL claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property (readonly, nonatomic) BOOL claimsToBeNewPasswordViaAutocompleteAttribute;
@property (readonly, nonatomic) BOOL claimsToBeUsernameViaAutocompleteAttribute;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) BOOL disallowsAutocomplete;
@property (readonly, copy, nonatomic) NSString *fieldClass; // @synthesize fieldClass=_fieldClass;
@property (readonly, copy, nonatomic) NSString *fieldID; // @synthesize fieldID=_fieldID;
@property (readonly, copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property (readonly, nonatomic, getter=isLabeledUsernameField) BOOL labeledUsernameField;
@property (readonly, nonatomic) long long lastAutoFillButtonType;
@property (readonly, nonatomic) BOOL looksLikeCreditCardCardholderField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardCompositeExpirationDateField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardNumberField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardSecurityCodeField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardTypeField;
@property (readonly, nonatomic) BOOL looksLikeDayField;
@property (readonly, nonatomic) BOOL looksLikeIgnoredDataTypeField;
@property (readonly, nonatomic) BOOL looksLikeMonthField;
@property (readonly, nonatomic) BOOL looksLikeOneTimeCodeField;
@property (readonly, nonatomic) BOOL looksLikePasswordCredentialField;
@property (readonly, nonatomic) BOOL looksLikeYearField;
@property (readonly, nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) unsigned long long minLength;
@property (readonly, copy, nonatomic) NSString *nextControlUniqueID; // @synthesize nextControlUniqueID=_nextControlUniqueID;
@property (readonly, copy, nonatomic) NSString *passwordRules; // @synthesize passwordRules=_passwordRules;
@property (readonly, copy, nonatomic) NSDictionary *radioButtonInfo; // @synthesize radioButtonInfo=_radioButtonInfo;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) double rectHeight; // @synthesize rectHeight=_rectHeight;
@property (readonly, nonatomic) double rectLeft; // @synthesize rectLeft=_rectLeft;
@property (readonly, nonatomic) double rectTop; // @synthesize rectTop=_rectTop;
@property (readonly, nonatomic) double rectWidth; // @synthesize rectWidth=_rectWidth;
@property (readonly, nonatomic, getter=isSecureTextField) BOOL secureTextField;
@property (readonly, copy, nonatomic) NSArray *selectElementInfo; // @synthesize selectElementInfo=_selectElementInfo;
@property (readonly, nonatomic) unsigned long long selectionLength;
@property (readonly, nonatomic) unsigned long long selectionStart;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property (readonly, nonatomic, getter=isTextField) BOOL textField;
@property (readonly, copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property (readonly, nonatomic, getter=isUserEditedTextField) BOOL userEditedTextField;
@property (readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

