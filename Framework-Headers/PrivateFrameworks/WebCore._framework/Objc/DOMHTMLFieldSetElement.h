//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement;

@interface DOMHTMLFieldSetElement : DOMHTMLElement
{
}

@property (readonly) DOMHTMLFormElement *form;

- (BOOL)checkValidity;
- (BOOL)disabled;
- (id)elements;
- (id)name;
- (void)setCustomValidity:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (id)type;
- (id)validationMessage;
- (id)validity;
- (BOOL)willValidate;

@end
