//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFTextFieldConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _secureTextEntry;
    BOOL _multiline;
    BOOL _allowsNegativeNumbers;
    BOOL _smartQuotesDisabled;
    BOOL _smartDashesDisabled;
    BOOL _focusImmediatelyWhenPresented;
    BOOL _showsDateFormattingHint;
    BOOL _doesRelativeDateFormatting;
    NSString *_prefix;
    NSString *_text;
    NSString *_placeholder;
    NSString *_keyboardType;
    NSString *_clearButtonMode;
    NSString *_autocapitalizationType;
    NSString *_autocorrectionType;
    NSString *_returnKeyType;
    NSString *_textContentType;
    NSString *_textAlignment;
    long long _initialInsertionIndex;
    unsigned long long _dateFormatStyle;
    unsigned long long _timeFormatStyle;
    NSString *_localizedIncompleteHintString;
}

@property (nonatomic) BOOL allowsNegativeNumbers; // @synthesize allowsNegativeNumbers=_allowsNegativeNumbers;
@property (copy, nonatomic) NSString *autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property (copy, nonatomic) NSString *clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property (nonatomic) unsigned long long dateFormatStyle; // @synthesize dateFormatStyle=_dateFormatStyle;
@property (nonatomic) BOOL doesRelativeDateFormatting; // @synthesize doesRelativeDateFormatting=_doesRelativeDateFormatting;
@property (nonatomic) BOOL focusImmediatelyWhenPresented; // @synthesize focusImmediatelyWhenPresented=_focusImmediatelyWhenPresented;
@property (nonatomic) long long initialInsertionIndex; // @synthesize initialInsertionIndex=_initialInsertionIndex;
@property (copy, nonatomic) NSString *keyboardType; // @synthesize keyboardType=_keyboardType;
@property (copy, nonatomic) NSString *localizedIncompleteHintString; // @synthesize localizedIncompleteHintString=_localizedIncompleteHintString;
@property (nonatomic, getter=isMultiline) BOOL multiline; // @synthesize multiline=_multiline;
@property (copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property (copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property (copy, nonatomic) NSString *returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property (nonatomic) BOOL showsDateFormattingHint; // @synthesize showsDateFormattingHint=_showsDateFormattingHint;
@property (nonatomic) BOOL smartDashesDisabled; // @synthesize smartDashesDisabled=_smartDashesDisabled;
@property (nonatomic) BOOL smartQuotesDisabled; // @synthesize smartQuotesDisabled=_smartQuotesDisabled;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) NSString *textAlignment; // @synthesize textAlignment=_textAlignment;
@property (copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property (nonatomic) unsigned long long timeFormatStyle; // @synthesize timeFormatStyle=_timeFormatStyle;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
