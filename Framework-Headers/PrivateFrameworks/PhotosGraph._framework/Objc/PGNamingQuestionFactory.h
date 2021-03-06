//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@class PHFetchResult;

@interface PGNamingQuestionFactory : PGSurveyQuestionFactory
{
    PHFetchResult *_persons;
}

@property (strong, nonatomic) PHFetchResult *persons; // @synthesize persons=_persons;

- (void).cxx_destruct;
- (BOOL)_persistQuestions:(id)arg1 questionsToRemove:(id)arg2;
- (BOOL)_shouldAddNewNamingQuestionForPersonUUID:(id)arg1;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end

