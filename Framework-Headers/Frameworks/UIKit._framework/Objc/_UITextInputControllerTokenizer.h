//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextInputStringTokenizer.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer
{
    UITextInputController *_textInput;
    struct __CFStringTokenizer *_tokenizer;
    int _tokenizerType;
}

- (void).cxx_destruct;
- (struct _NSRange)_getClosestTokenRangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3;
- (long long)_indexForTextPosition:(id)arg1;
- (BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (long long)_writingDirectionAtPosition:(id)arg1;
- (void)dealloc;
- (id)initWithTextInputController:(id)arg1;
- (void)invalidateTokenizer;

@end

