//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldText : PKPaymentSetupField
{
    BOOL _secureText;
    BOOL _secureVisibleText;
    BOOL _numeric;
    BOOL _luhnCheck;
    unsigned long long _minLength;
    unsigned long long _maxLength;
    NSString *_displayFormatPlaceholder;
}

@property (copy, nonatomic) NSString *displayFormatPlaceholder; // @synthesize displayFormatPlaceholder=_displayFormatPlaceholder;
@property (nonatomic, getter=useLuhnCheck) BOOL luhnCheck; // @synthesize luhnCheck=_luhnCheck;
@property (nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property (nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property (nonatomic, getter=isNumeric) BOOL numeric; // @synthesize numeric=_numeric;
@property (nonatomic, getter=isSecureText) BOOL secureText; // @synthesize secureText=_secureText;
@property (nonatomic, getter=isSecureVisibleText) BOOL secureVisibleText; // @synthesize secureVisibleText=_secureVisibleText;

- (void).cxx_destruct;
- (id)displayFormatPaddingCharacters;
- (id)displayFormatPaddingPrefix;
- (id)displayString;
- (unsigned long long)fieldType;
- (BOOL)hasDisplayFormat;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)setCurrentValue:(id)arg1;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateDisplayFormat:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end
