//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHPerson;

@interface _PXForYouPeopleQuestion : NSObject
{
    long long _questionType;
    PHPerson *_targetPerson;
}

@property (readonly, nonatomic) long long questionType; // @synthesize questionType=_questionType;
@property (readonly, nonatomic) PHPerson *targetPerson; // @synthesize targetPerson=_targetPerson;

- (void).cxx_destruct;
- (id)initWithQuestionType:(long long)arg1 targetPerson:(id)arg2;

@end
