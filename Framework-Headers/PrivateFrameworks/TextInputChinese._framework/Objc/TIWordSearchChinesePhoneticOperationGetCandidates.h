//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperationGetCandidates.h>

@class NSArray;

@interface TIWordSearchChinesePhoneticOperationGetCandidates : TIWordSearchOperationGetCandidates
{
    NSArray *_disambiguationCandidates;
    unsigned long long _selectedDisambiguationCandidateIndex;
}

@property (readonly, nonatomic) NSArray *disambiguationCandidates; // @synthesize disambiguationCandidates=_disambiguationCandidates;
@property (readonly, nonatomic) unsigned long long selectedDisambiguationCandidateIndex; // @synthesize selectedDisambiguationCandidateIndex=_selectedDisambiguationCandidateIndex;

- (void).cxx_destruct;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 disambiguationCandidates:(id)arg5 selectedDisambiguationCandidateIndex:(unsigned long long)arg6 predictionEnabled:(BOOL)arg7 reanalysisMode:(BOOL)arg8 target:(id)arg9 action:(SEL)arg10 geometryModelData:(id)arg11 hardwareKeyboardMode:(BOOL)arg12 logger:(id)arg13;

@end
