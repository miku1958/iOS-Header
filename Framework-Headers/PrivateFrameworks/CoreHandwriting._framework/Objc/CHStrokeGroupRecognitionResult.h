//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying>
{
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSArray *_inputStrokeIdentifiers;
    NSDictionary *__recognitionResultsByLocale;
    NSDictionary *__languageFitnessByLocale;
}

@property (readonly, copy, nonatomic) NSDictionary *_languageFitnessByLocale; // @synthesize _languageFitnessByLocale=__languageFitnessByLocale;
@property (readonly, copy, nonatomic) NSDictionary *_recognitionResultsByLocale; // @synthesize _recognitionResultsByLocale=__recognitionResultsByLocale;
@property (readonly, strong, nonatomic) CHDrawing *inputDrawing;
@property (readonly, copy, nonatomic) NSArray *inputDrawingCutPoints;
@property (readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers; // @synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers;

+ (id)sortedLocales:(id)arg1 byLanguageFitness:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double *)arg2;
- (id)init;
- (id)initWithResultsByLocale:(id)arg1 languageFitnessByLocale:(id)arg2 inputStrokeIdentifiers:(id)arg3;
- (id)initWithResultsByLocale:(id)arg1 languageFitnessByLocale:(id)arg2 inputStrokeIdentifiers:(id)arg3 inputDrawing:(id)arg4 inputDrawingCutPoints:(id)arg5;
- (float)languageFitnessForLocale:(id)arg1;
- (id)recognitionResultsForLocale:(id)arg1;

@end

