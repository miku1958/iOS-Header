//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSUndoTextOperation.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationReplace : NSUndoTextOperation
{
    struct _NSRange _replacementRange;
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;
- (void)undoRedo;

@end

