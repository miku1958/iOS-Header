//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol NSObject><NSCopying;

@interface PKPaymentSetupField : NSObject
{
    id<NSObject><NSCopying> _currentValue;
    id<NSObject><NSCopying> _originalCameraCaptureValue;
    BOOL _optional;
    BOOL _currentValueFromCameraCapture;
    BOOL _requiresSecureSubmission;
    NSString *_identifier;
    NSString *_localizedDisplayName;
    NSString *_displayFormat;
    NSString *_defaultValue;
    NSString *_submissionKey;
    NSString *_submissionDestination;
    NSString *_localizedPlaceholder;
    NSDictionary *_rawConfigurationDictionary;
}

@property (readonly, nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
@property (copy, nonatomic) id<NSObject><NSCopying> currentValue; // @synthesize currentValue=_currentValue;
@property (nonatomic, getter=isCurrentValueFromCameraCapture) BOOL currentValueFromCameraCapture; // @synthesize currentValueFromCameraCapture=_currentValueFromCameraCapture;
@property (copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property (copy, nonatomic) NSString *displayFormat; // @synthesize displayFormat=_displayFormat;
@property (readonly, nonatomic) unsigned long long fieldType;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property (copy, nonatomic) NSString *localizedPlaceholder; // @synthesize localizedPlaceholder=_localizedPlaceholder;
@property (nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property (copy, nonatomic) id<NSObject><NSCopying> originalCameraCaptureValue; // @synthesize originalCameraCaptureValue=_originalCameraCaptureValue;
@property (readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary; // @synthesize rawConfigurationDictionary=_rawConfigurationDictionary;
@property (nonatomic) BOOL requiresSecureSubmission; // @synthesize requiresSecureSubmission=_requiresSecureSubmission;
@property (copy, nonatomic) NSString *submissionDestination; // @synthesize submissionDestination=_submissionDestination;
@property (copy, nonatomic) NSString *submissionKey; // @synthesize submissionKey=_submissionKey;

+ (Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)newRandomlyGeneratedField;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2;
+ (id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)sampleCustomPaymentSetupFields;
- (void).cxx_destruct;
- (void)_setLocalizedDisplayName:(id)arg1;
- (id)_submissionStringForValue:(id)arg1;
- (id)dateFieldObject;
- (id)displayString;
- (id)footerFieldObject;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)isFieldTypeDate;
- (BOOL)isFieldTypeFooter;
- (BOOL)isFieldTypeLabel;
- (BOOL)isFieldTypePicker;
- (BOOL)isFieldTypeText;
- (id)labelFieldObject;
- (void)noteCurrentValueChanged;
- (id)pickerFieldObject;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)textFieldObject;
- (void)updateWithConfiguration:(id)arg1;

@end

