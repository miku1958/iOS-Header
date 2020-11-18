//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

#import <WebKitLegacy/UITextInputTraits-Protocol.h>

@class DOMFileList, DOMHTMLFormElement, NSString, NSURL, UITextInputPasswordRules;

@interface DOMHTMLInputElement : DOMHTMLElement <UITextInputTraits>
{
}

@property (readonly, copy) NSURL *absoluteImageURL;
@property (copy) NSString *accept;
@property (copy) NSString *accessKey;
@property (copy) NSString *align;
@property (copy) NSString *alt;
@property (readonly, copy) NSString *altDisplayString;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property BOOL autofocus;
@property BOOL checked;
@property (readonly, copy) NSString *debugDescription;
@property BOOL defaultChecked;
@property (copy) NSString *defaultValue;
@property (readonly, copy) NSString *description;
@property BOOL disabled;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (strong) DOMFileList *files;
@property (readonly) DOMHTMLFormElement *form;
@property (readonly) unsigned long long hash;
@property BOOL indeterminate;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property int maxLength;
@property BOOL multiple;
@property (copy) NSString *name;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property BOOL readOnly;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property int selectionEnd;
@property int selectionStart;
@property (copy) NSString *size;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (copy) NSString *src;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (copy) NSString *type;
@property (copy) NSString *useMap;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;

- (int)_autocapitalizeType;
- (id)_autofillContext;
- (BOOL)_isAutofilled;
- (BOOL)_isEdited;
- (BOOL)_isTextField;
- (void)_setAutofilled:(BOOL)arg1;
- (id)autocomplete;
- (BOOL)capture;
- (BOOL)checkValidity;
- (void)click;
- (id)dirName;
- (id)endPosition;
- (id)formAction;
- (id)formEnctype;
- (id)formMethod;
- (BOOL)formNoValidate;
- (id)formTarget;
- (unsigned int)height;
- (BOOL)incremental;
- (void)insertTextSuggestion:(id)arg1;
- (id)labels;
- (id)list;
- (id)max;
- (id)min;
- (id)pattern;
- (id)placeholder;
- (BOOL)required;
- (void)select;
- (id)selectionDirection;
- (void)setAutocomplete:(id)arg1;
- (void)setCapture:(BOOL)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setDirName:(id)arg1;
- (void)setFormAction:(id)arg1;
- (void)setFormEnctype:(id)arg1;
- (void)setFormMethod:(id)arg1;
- (void)setFormNoValidate:(BOOL)arg1;
- (void)setFormTarget:(id)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setIncremental:(BOOL)arg1;
- (void)setMax:(id)arg1;
- (void)setMin:(id)arg1;
- (void)setPattern:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRangeText:(id)arg1;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setRequired:(BOOL)arg1;
- (void)setSelectionDirection:(id)arg1;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setStep:(id)arg1;
- (void)setValueAsDate:(double)arg1;
- (void)setValueAsNumber:(double)arg1;
- (void)setValueAsNumberWithChangeEvent:(double)arg1;
- (void)setValueForUser:(id)arg1;
- (void)setValueWithChangeEvent:(id)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)startPosition;
- (id)step;
- (void)stepDown:(int)arg1;
- (void)stepUp:(int)arg1;
- (int)structuralComplexityContribution;
- (id)validationMessage;
- (double)valueAsDate;
- (double)valueAsNumber;
- (unsigned int)width;

@end

