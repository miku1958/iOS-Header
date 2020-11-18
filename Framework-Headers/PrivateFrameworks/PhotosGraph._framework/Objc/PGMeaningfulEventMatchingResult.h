//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject
{
    BOOL _isMatching;
    BOOL _isReliable;
    double _score;
    PGMeaningfulEventRequiredCriteria *_requiredCriteria;
}

@property (readonly, nonatomic) BOOL isMatching; // @synthesize isMatching=_isMatching;
@property (readonly, nonatomic) BOOL isReliable; // @synthesize isReliable=_isReliable;
@property (readonly, nonatomic) PGMeaningfulEventRequiredCriteria *requiredCriteria; // @synthesize requiredCriteria=_requiredCriteria;
@property (readonly, nonatomic) double score; // @synthesize score=_score;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIsMatching:(BOOL)arg1 score:(double)arg2 isReliable:(BOOL)arg3 requiredCriteria:(id)arg4;

@end
