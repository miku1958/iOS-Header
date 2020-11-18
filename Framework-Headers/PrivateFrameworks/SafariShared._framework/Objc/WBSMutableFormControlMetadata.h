//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSFormControlMetadata.h>

@class NSArray, NSDictionary, NSString;

@interface WBSMutableFormControlMetadata : WBSFormControlMetadata
{
}

@property (nonatomic, getter=isActive) BOOL active; // @dynamic active;
@property (copy, nonatomic) NSString *addressBookLabel; // @dynamic addressBookLabel;
@property (copy, nonatomic) NSDictionary *annotations; // @dynamic annotations;
@property (copy, nonatomic) NSString *associatedUsername; // @dynamic associatedUsername;
@property (nonatomic) long long autoFillButtonType; // @dynamic autoFillButtonType;
@property (nonatomic, getter=isAutoFilledTextField) BOOL autoFilledTextField; // @dynamic autoFilledTextField;
@property (copy, nonatomic) NSArray *autocompleteTokens; // @dynamic autocompleteTokens;
@property (nonatomic) BOOL claimsToBeCurrentPasswordViaAutocompleteAttribute; // @dynamic claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property (nonatomic) BOOL claimsToBeNewPasswordViaAutocompleteAttribute; // @dynamic claimsToBeNewPasswordViaAutocompleteAttribute;
@property (nonatomic) BOOL claimsToBeUsernameViaAutocompleteAttribute; // @dynamic claimsToBeUsernameViaAutocompleteAttribute;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @dynamic disabled;
@property (nonatomic) BOOL disallowsAutocomplete; // @dynamic disallowsAutocomplete;
@property (copy, nonatomic) NSString *fieldClass; // @dynamic fieldClass;
@property (copy, nonatomic) NSString *fieldID; // @dynamic fieldID;
@property (copy, nonatomic) NSString *fieldName; // @dynamic fieldName;
@property (nonatomic, getter=isLabeledUsernameField) BOOL labeledUsernameField; // @dynamic labeledUsernameField;
@property (nonatomic) long long lastAutoFillButtonType; // @dynamic lastAutoFillButtonType;
@property (nonatomic) BOOL looksLikeCreditCardCardholderField; // @dynamic looksLikeCreditCardCardholderField;
@property (nonatomic) BOOL looksLikeCreditCardCompositeExpirationDateField; // @dynamic looksLikeCreditCardCompositeExpirationDateField;
@property (nonatomic) BOOL looksLikeCreditCardNumberField; // @dynamic looksLikeCreditCardNumberField;
@property (nonatomic) BOOL looksLikeCreditCardSecurityCodeField; // @dynamic looksLikeCreditCardSecurityCodeField;
@property (nonatomic) BOOL looksLikeCreditCardTypeField; // @dynamic looksLikeCreditCardTypeField;
@property (nonatomic) BOOL looksLikeDayField; // @dynamic looksLikeDayField;
@property (nonatomic) BOOL looksLikeIgnoredDataTypeField; // @dynamic looksLikeIgnoredDataTypeField;
@property (nonatomic) BOOL looksLikeMonthField; // @dynamic looksLikeMonthField;
@property (nonatomic) BOOL looksLikeOneTimeCodeField; // @dynamic looksLikeOneTimeCodeField;
@property (nonatomic) BOOL looksLikePasswordCredentialField; // @dynamic looksLikePasswordCredentialField;
@property (nonatomic) BOOL looksLikeYearField; // @dynamic looksLikeYearField;
@property (nonatomic) unsigned long long maxLength; // @dynamic maxLength;
@property (nonatomic) unsigned long long minLength; // @dynamic minLength;
@property (copy, nonatomic) NSString *nextControlUniqueID; // @dynamic nextControlUniqueID;
@property (copy, nonatomic) NSString *passwordRules; // @dynamic passwordRules;
@property (copy, nonatomic) NSDictionary *radioButtonInfo; // @dynamic radioButtonInfo;
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // @dynamic readOnly;
@property (nonatomic) double rectHeight; // @dynamic rectHeight;
@property (nonatomic) double rectLeft; // @dynamic rectLeft;
@property (nonatomic) double rectTop; // @dynamic rectTop;
@property (nonatomic) double rectWidth; // @dynamic rectWidth;
@property (nonatomic, getter=isSecureTextField) BOOL secureTextField; // @dynamic secureTextField;
@property (copy, nonatomic) NSArray *selectElementInfo; // @dynamic selectElementInfo;
@property (nonatomic) unsigned long long selectionLength; // @dynamic selectionLength;
@property (nonatomic) unsigned long long selectionStart; // @dynamic selectionStart;
@property (nonatomic) unsigned long long size; // @dynamic size;
@property (copy, nonatomic) NSString *tagName; // @dynamic tagName;
@property (nonatomic, getter=isTextField) BOOL textField; // @dynamic textField;
@property (copy, nonatomic) NSString *uniqueID; // @dynamic uniqueID;
@property (nonatomic, getter=isUserEditedTextField) BOOL userEditedTextField; // @dynamic userEditedTextField;
@property (copy, nonatomic) NSString *value; // @dynamic value;
@property (nonatomic, getter=isVisible) BOOL visible; // @dynamic visible;

- (void)setPlaceholder:(id)arg1;
- (void)setassociatedUsername:(id)arg1;

@end

