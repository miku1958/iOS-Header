//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLInputElement.h>

@interface DOMHTMLInputElement (UIWebFormPeripheral)
- (void)_accessoryClear;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_supportsAccessoryClear;
- (BOOL)_supportsAutoFill;
- (id)_textFormElement;
- (id)createPeripheral;
- (BOOL)isAssistedDateType;
- (BOOL)isEditing;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)isSecure;
- (BOOL)isTextControl;
- (long long)keyboardType;
- (BOOL)nodeCanBecomeFirstResponder;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (id)text;
- (id)textInputTraits;
@end
