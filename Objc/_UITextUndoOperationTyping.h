//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSUndoTextOperation.h>

@class NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationTyping : NSUndoTextOperation
{
    struct _NSRange _replacementRange;
    NSMutableAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (BOOL)coalesceAffectedRange:(struct _NSRange)arg1 replacementRange:(struct _NSRange)arg2 selectedRange:(struct _NSRange)arg3 textStorage:(id)arg4;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;
- (BOOL)supportsCoalescing;
- (void)undoRedo;

@end
