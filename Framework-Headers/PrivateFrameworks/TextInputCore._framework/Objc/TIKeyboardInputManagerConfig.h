//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TIInputMode;

@interface TIKeyboardInputManagerConfig : NSObject
{
    BOOL _allowsSpaceCorrections;
    BOOL _usesTextChecker;
    BOOL _usesRetrocorrection;
    BOOL _usesWordNgramModel;
    BOOL _usesAdaptation;
    BOOL _completionsShouldSharePrefix;
    BOOL _testing;
    TIInputMode *_inputMode;
    NSString *_staticDictionaryPath;
    NSString *_dynamicResourcePath;
    NSString *_ngramModelPath;
    unsigned long long _maxWordsPerPrediction;
}

@property (nonatomic) BOOL allowsSpaceCorrections; // @synthesize allowsSpaceCorrections=_allowsSpaceCorrections;
@property (nonatomic) BOOL completionsShouldSharePrefix; // @synthesize completionsShouldSharePrefix=_completionsShouldSharePrefix;
@property (copy, nonatomic) NSString *dynamicResourcePath; // @synthesize dynamicResourcePath=_dynamicResourcePath;
@property (strong, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
@property (nonatomic) unsigned long long maxWordsPerPrediction; // @synthesize maxWordsPerPrediction=_maxWordsPerPrediction;
@property (copy, nonatomic) NSString *ngramModelPath; // @synthesize ngramModelPath=_ngramModelPath;
@property (copy, nonatomic) NSString *staticDictionaryPath; // @synthesize staticDictionaryPath=_staticDictionaryPath;
@property (nonatomic, getter=isTesting) BOOL testing; // @synthesize testing=_testing;
@property (nonatomic) BOOL usesAdaptation; // @synthesize usesAdaptation=_usesAdaptation;
@property (nonatomic) BOOL usesRetrocorrection; // @synthesize usesRetrocorrection=_usesRetrocorrection;
@property (nonatomic) BOOL usesTextChecker; // @synthesize usesTextChecker=_usesTextChecker;
@property (nonatomic) BOOL usesWordNgramModel; // @synthesize usesWordNgramModel=_usesWordNgramModel;
@property (nonatomic) BOOL usesWordNgramModelAdaptation;

+ (id)configurationForInputMode:(id)arg1;
- (void)dealloc;
- (id)propertyList;

@end

