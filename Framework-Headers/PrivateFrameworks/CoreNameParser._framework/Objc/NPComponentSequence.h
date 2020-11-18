//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NPComponentSequence : NSObject
{
    BOOL _favorite;
    NSArray *_observation;
    NSArray *_sequence;
    NSArray *_oovIndices;
    double _score;
    double _emissionModelScore;
    double _stateModelScore;
}

@property double emissionModelScore; // @synthesize emissionModelScore=_emissionModelScore;
@property (getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property (copy) NSArray *observation; // @synthesize observation=_observation;
@property (copy) NSArray *oovIndices; // @synthesize oovIndices=_oovIndices;
@property double score; // @synthesize score=_score;
@property (copy) NSArray *sequence; // @synthesize sequence=_sequence;
@property double stateModelScore; // @synthesize stateModelScore=_stateModelScore;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObservationSequence:(id)arg1 hiddenSequence:(id)arg2 oovIndices:(id)arg3 emissionModelScore:(double)arg4 stateModelScore:(double)arg5 boost:(double)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToComponentSequence:(id)arg1;
- (id)oovTokens;
- (void)setValue:(id)arg1 atSequenceIndex:(unsigned long long)arg2;

@end
