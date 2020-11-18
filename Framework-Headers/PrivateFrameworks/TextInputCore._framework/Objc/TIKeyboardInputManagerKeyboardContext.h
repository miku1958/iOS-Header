//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TIKeyboardOutput, TIKeyboardState, TIRevisionHistory;

@interface TIKeyboardInputManagerKeyboardContext : NSObject
{
    TIKeyboardOutput *_output;
    TIRevisionHistory *_revisionHistory;
    TIKeyboardState *_currentState;
}

@property (readonly, nonatomic) TIKeyboardState *currentState; // @synthesize currentState=_currentState;
@property (readonly, nonatomic) TIKeyboardOutput *output; // @synthesize output=_output;
@property (strong, nonatomic) TIRevisionHistory *revisionHistory; // @synthesize revisionHistory=_revisionHistory;

- (void).cxx_destruct;
- (void)acceptCandidate:(id)arg1;
- (void)clearInputForMarkedText;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)deleteForward:(unsigned long long)arg1;
- (void)deleteHandwritingStrokes:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)unmarkText:(id)arg1;

@end

