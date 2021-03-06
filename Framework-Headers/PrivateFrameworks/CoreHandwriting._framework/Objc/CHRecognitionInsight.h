//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDrawing, CHRecognitionInsightRequest, CHTokenizedTextResult, NSArray, NSCharacterSet, NSDictionary, NSError, NSLocale, NSString;

@interface CHRecognitionInsight : NSObject
{
    int _recognizerRecognitionMode;
    int _recognizerContentType;
    int _autoCapitalizationMode;
    CHRecognitionInsightRequest *_insightRequest;
    NSLocale *_recognizerLocale;
    NSCharacterSet *_recognizerActiveCharacterSet;
    NSDictionary *_recognizerOptions;
    unsigned long long _recognizerMaxRecognitionResultCount;
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSArray *_spaceProbabilities;
    NSArray *_charBoundaryProbabilities;
    NSArray *_delayedStrokeProbabilities;
    CHTokenizedTextResult *_textResult;
    NSError *_recognitionError;
    struct CGSize _recognizerMinimumDrawingSize;
}

@property (nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property (readonly, nonatomic) NSString *autoCapitalizationModeDescription;
@property (copy, nonatomic) NSArray *charBoundaryProbabilities; // @synthesize charBoundaryProbabilities=_charBoundaryProbabilities;
@property (copy, nonatomic) NSArray *delayedStrokeProbabilities; // @synthesize delayedStrokeProbabilities=_delayedStrokeProbabilities;
@property (copy, nonatomic) CHDrawing *inputDrawing; // @synthesize inputDrawing=_inputDrawing;
@property (copy, nonatomic) NSArray *inputDrawingCutPoints; // @synthesize inputDrawingCutPoints=_inputDrawingCutPoints;
@property (strong, nonatomic) CHRecognitionInsightRequest *insightRequest; // @synthesize insightRequest=_insightRequest;
@property (copy, nonatomic) NSError *recognitionError; // @synthesize recognitionError=_recognitionError;
@property (copy, nonatomic) NSCharacterSet *recognizerActiveCharacterSet; // @synthesize recognizerActiveCharacterSet=_recognizerActiveCharacterSet;
@property (nonatomic) int recognizerContentType; // @synthesize recognizerContentType=_recognizerContentType;
@property (readonly, nonatomic) NSString *recognizerContentTypeDescription;
@property (copy, nonatomic) NSLocale *recognizerLocale; // @synthesize recognizerLocale=_recognizerLocale;
@property (nonatomic) unsigned long long recognizerMaxRecognitionResultCount; // @synthesize recognizerMaxRecognitionResultCount=_recognizerMaxRecognitionResultCount;
@property (nonatomic) struct CGSize recognizerMinimumDrawingSize; // @synthesize recognizerMinimumDrawingSize=_recognizerMinimumDrawingSize;
@property (copy, nonatomic) NSDictionary *recognizerOptions; // @synthesize recognizerOptions=_recognizerOptions;
@property (nonatomic) int recognizerRecognitionMode; // @synthesize recognizerRecognitionMode=_recognizerRecognitionMode;
@property (readonly, nonatomic) NSString *recognizerRecognitionModeDescription;
@property (copy, nonatomic) NSArray *spaceProbabilities; // @synthesize spaceProbabilities=_spaceProbabilities;
@property (copy, nonatomic) CHTokenizedTextResult *textResult; // @synthesize textResult=_textResult;

- (void)dealloc;
- (id)description;
- (void)recordCharBoundaryProbabilities:(const vector_8f06c10f *)arg1;
- (void)recordConfigurationForRecognizer:(id)arg1 options:(id)arg2;
- (void)recordDelayedStrokeProbabilities:(const vector_8f06c10f *)arg1;
- (void)recordInputDrawing:(id)arg1;
- (void)recordInputDrawingCutPoints:(id)arg1;
- (void)recordInsightRequest:(id)arg1;
- (void)recordSpaceProbabilities:(const vector_8f06c10f *)arg1;
- (void)recordTextResult:(id)arg1 recognitionError:(id)arg2;

@end

