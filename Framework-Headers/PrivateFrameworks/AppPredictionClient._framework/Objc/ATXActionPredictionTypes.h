//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ATXActionPredictionTypes : NSObject
{
}

+ (id)actionExperienceToString:(unsigned long long)arg1;
+ (id)actionFeedbackStageToString:(unsigned long long)arg1;
+ (id)actionFeedbackTypeToString:(unsigned long long)arg1;
+ (id)actionTypeToPETString:(unsigned long long)arg1;
+ (id)actionTypeToString:(unsigned long long)arg1;
+ (id)engagementTypeToString:(unsigned long long)arg1;
+ (id)inverseActionFeedbackTypeMapping;
+ (unsigned long long)stringToActionExperience:(id)arg1 found:(BOOL *)arg2;
+ (unsigned long long)stringToActionFeedbackStage:(id)arg1 found:(BOOL *)arg2;

@end

