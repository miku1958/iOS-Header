//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFModernAtomView.h>

@class MFComposeRecipient, UITextInputTraits;
@protocol MFComposeRecipientAtomDelegate;

@interface MFModernComposeRecipientAtom : MFModernAtomView
{
    id<MFComposeRecipientAtomDelegate> _delegate;
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan:1;
    unsigned int _touchesWereCancelled:1;
}

@property (nonatomic) id<MFComposeRecipientAtomDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) MFComposeRecipient *recipient;

- (void)dealloc;
- (void)handleTouchAndHold;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;
- (id)keyCommands;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
