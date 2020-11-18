//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocompleteUI/CNAtomView.h>

@class CNComposeRecipient, UITextInputTraits;
@protocol CNComposeRecipientAtomDelegate;

@interface CNComposeRecipientAtom : CNAtomView
{
    CNComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan:1;
    unsigned int _touchesWereCancelled:1;
    id<CNComposeRecipientAtomDelegate> _delegate;
}

@property (weak, nonatomic) id<CNComposeRecipientAtomDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) CNComposeRecipient *recipient; // @synthesize recipient=_recipient;

- (void).cxx_destruct;
- (void)handleTouchAndHold;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;
- (id)keyCommands;
- (id)menuConfigurationForChevronButton;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
