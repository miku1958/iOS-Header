//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLProbabilityDictionary.h>

@interface MLInt64ProbabilityDictionary : MLProbabilityDictionary
{
    map_f8690629 _mapIntLabelToIndex;
}

@property (nonatomic) map_f8690629 mapIntLabelToIndex; // @synthesize mapIntLabelToIndex=_mapIntLabelToIndex;

+ (id)probabilityDictionaryForInt64Labels:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copy;
- (unsigned long long)count;
- (id)initWithIntLabels:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

