//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView
{
    unsigned long long _textStorageEditingDepth;
    MFComposeRecipientTextView *_hostRecipientView;
}

@property (readonly) NSArray *atoms;
@property (weak) MFComposeRecipientTextView *hostRecipientView; // @synthesize hostRecipientView=_hostRecipientView;

- (void).cxx_destruct;
- (BOOL)_delegateSupportsKeyboardEvents;
- (void)_handleKeyUIEvent:(id)arg1;
- (long long)baseWritingDirection;
- (void)batchTextStorageUpdates:(CDUnknownBlockType)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)enumerateAtomAttachments:(CDUnknownBlockType)arg1;
- (void)enumerateAtoms:(CDUnknownBlockType)arg1;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (BOOL)isEditingTextStorage;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)resignFirstResponder;
- (id)selectionRectsForRange:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)undoManager;

@end
