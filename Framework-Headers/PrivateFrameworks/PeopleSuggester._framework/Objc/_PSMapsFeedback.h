//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _PSMapsFeedbackAction, _PSMapsPredictionContext;

@interface _PSMapsFeedback : NSObject
{
    BOOL _dryRun;
    _PSMapsFeedbackAction *_action;
    _PSMapsPredictionContext *_context;
    NSArray *_suggestions;
}

@property (readonly, nonatomic) _PSMapsFeedbackAction *action; // @synthesize action=_action;
@property (readonly, nonatomic) _PSMapsPredictionContext *context; // @synthesize context=_context;
@property (nonatomic) BOOL dryRun; // @synthesize dryRun=_dryRun;
@property (readonly, nonatomic) unsigned long long indexOfEngagedSuggestion;
@property (readonly, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;

- (void).cxx_destruct;
- (id)feedbackPayload;
- (id)getTrialID;
- (id)initWithFeedbackAction:(id)arg1 predictionContext:(id)arg2 suggestions:(id)arg3;
- (id)knowledgeEvent;

@end
