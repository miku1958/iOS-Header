//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SGQPEmotivePhrases, SGQPMetricsTracker, SGQPParsecEntitiesPredictor, SGQPResponseKitPredictor;

@interface SGQPLanguageContext : NSObject
{
    SGQPParsecEntitiesPredictor *_parsecPredictor;
    SGQPEmotivePhrases *_emotivePhrases;
    SGQPResponseKitPredictor *_responseKitPredictor;
    NSArray *_finalOrderingPattern;
    double _finalThreshold;
    SGQPMetricsTracker *_metricsTracker;
    NSString *_language;
    NSString *_abGroup;
}

@property (readonly, nonatomic) NSString *abGroup; // @synthesize abGroup=_abGroup;
@property (readonly, nonatomic) NSString *language; // @synthesize language=_language;

+ (id)array:(id)arg1 orderedByPattern:(id)arg2;
+ (id)languageContextsWithMetricsTracker:(id)arg1 asset:(id)arg2;
+ (id)orderingPatternFromString:(id)arg1;
+ (id)unsupportedLanguageContextWithMetricsTracker:(id)arg1;
- (void).cxx_destruct;
- (id)emotivePhrasesPredictionsFromMessages:(id)arg1;
- (id)init;
- (id)initWithParsecPredictor:(id)arg1 emotivePhrases:(id)arg2 responseKitPredictor:(id)arg3 finalOrderingPattern:(id)arg4 language:(id)arg5 abGroup:(id)arg6 metricsTracker:(id)arg7 finalThreshold:(double)arg8;
- (id)parsecEntitiesInMessages:(id)arg1;
- (id)predictionsFromMessages:(id)arg1 conversationId:(id)arg2 count:(unsigned long long)arg3;
- (id)responseKitPredictionsFromMessages:(id)arg1;

@end

