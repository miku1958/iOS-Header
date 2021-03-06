//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INVocabularyUpdater, _INVocabularyValidator;
@protocol OS_dispatch_queue;

@interface _INVocabulary : NSObject
{
    INVocabularyUpdater *_vocabularyUpdater;
    _INVocabularyValidator *_validator;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)enumerateVocabularyUsingBlock:(CDUnknownBlockType)arg1;
+ (id)sharedVocabulary;
+ (id)supportedVocabularyStringTypes;
- (void).cxx_destruct;
- (void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg1;
- (void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
- (id)_validator;
- (id)init;
- (void)removeAllVocabularyStrings;
- (void)setValidatedVocabulary:(id)arg1 ofType:(long long)arg2;
- (void)setVocabulary:(id)arg1 ofType:(long long)arg2;
- (void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2;
- (void)validateVocabularyType:(long long)arg1;

@end

