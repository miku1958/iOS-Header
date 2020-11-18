//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidate.h>

@class UITextSuggestion;

__attribute__((visibility("hidden")))
@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate
{
    unsigned long long _customInfoType;
    UITextSuggestion *_textSuggestion;
}

@property (readonly, nonatomic) UITextSuggestion *textSuggestion; // @synthesize textSuggestion=_textSuggestion;

+ (id)candidateWithSuggestion:(id)arg1;
+ (id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)customInfoType;
- (id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;
- (id)input;
- (id)label;

@end

