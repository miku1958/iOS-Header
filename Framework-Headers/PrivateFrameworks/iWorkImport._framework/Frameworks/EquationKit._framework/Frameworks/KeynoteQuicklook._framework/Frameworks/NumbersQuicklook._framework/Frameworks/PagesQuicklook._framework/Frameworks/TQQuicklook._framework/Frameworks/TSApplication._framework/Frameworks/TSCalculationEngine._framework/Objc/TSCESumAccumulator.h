//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TSCESumAccumulator : NSObject
{
    NSDate *_dateAccumulator;
    double _secondsToAdd;
    struct TSCENumberValue _numberAccumulator;
    BOOL _mixedDurationsAndNumbers;
    BOOL _foundANumber;
}

@property (nonatomic) NSDate *dateAccumulator; // @synthesize dateAccumulator=_dateAccumulator;
@property (nonatomic) BOOL foundANumber; // @synthesize foundANumber=_foundANumber;
@property (nonatomic) BOOL mixedDurationsAndNumbers; // @synthesize mixedDurationsAndNumbers=_mixedDurationsAndNumbers;
@property (readonly, nonatomic) struct TSCENumberValue *numberAccumulator; // @synthesize numberAccumulator=_numberAccumulator;
@property (nonatomic) double secondsToAdd; // @synthesize secondsToAdd=_secondsToAdd;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addValue:(const struct TSCEValue *)arg1 function:(id)arg2 evaluationContext:(struct TSCEEvaluationContext *)arg3;
- (id)init;
- (struct TSCEValue)resultForFunction:(id)arg1;

@end

