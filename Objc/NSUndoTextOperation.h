//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface NSUndoTextOperation : NSObject
{
    UITextInputController *_inputController;
    struct _NSRange _affectedRange;
}

@property (nonatomic) struct _NSRange affectedRange; // @synthesize affectedRange=_affectedRange;
@property (weak, nonatomic) UITextInputController *inputController; // @synthesize inputController=_inputController;

- (void).cxx_destruct;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2;
- (BOOL)supportsCoalescing;
- (void)undoRedo;

@end

