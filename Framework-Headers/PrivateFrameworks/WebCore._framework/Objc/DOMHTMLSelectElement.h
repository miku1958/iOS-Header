//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, DOMHTMLOptionsCollection, NSString;

@interface DOMHTMLSelectElement : DOMHTMLElement
{
}

@property BOOL autofocus;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (readonly) int length;
@property BOOL multiple;
@property (copy) NSString *name;
@property (readonly) DOMHTMLOptionsCollection *options;
@property int selectedIndex;
@property int size;
@property (readonly, copy) NSString *type;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;

- (void)_activateItemAtIndex:(int)arg1;
- (void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(BOOL)arg2;
- (void)add:(id)arg1:(id)arg2;
- (void)add:(id)arg1 before:(id)arg2;
- (id)autocomplete;
- (BOOL)checkValidity;
- (unsigned int)completeLength;
- (id)item:(unsigned int)arg1;
- (id)labels;
- (id)listItemAtIndex:(int)arg1;
- (id)namedItem:(id)arg1;
- (void)remove:(int)arg1;
- (BOOL)required;
- (id)selectedOptions;
- (void)setAutocomplete:(id)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setRequired:(BOOL)arg1;
- (int)structuralComplexityContribution;
- (id)validationMessage;
- (id)validity;

@end

