//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UITextReplacementCandidate : TIKeyboardCandidateSingle
{
    UITextReplacement *_replacement;
}

@property (readonly, nonatomic) UITextReplacement *replacement; // @synthesize replacement=_replacement;

+ (id)textReplacementCandidateForTextReplacement:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithTextReplacement:(id)arg1;
- (id)label;

@end

