//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIAutocorrectionList, TIKeyboardCandidate, TIKeyboardState;

@interface TITypologyRecordRefinements : TITypologyRecord
{
    TIKeyboardCandidate *_candidate;
    TIKeyboardState *_keyboardState;
    TIAutocorrectionList *_refinements;
}

@property (strong, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
@property (strong, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property (strong, nonatomic) TIAutocorrectionList *refinements; // @synthesize refinements=_refinements;

- (void)applyToStatistic:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;

@end

