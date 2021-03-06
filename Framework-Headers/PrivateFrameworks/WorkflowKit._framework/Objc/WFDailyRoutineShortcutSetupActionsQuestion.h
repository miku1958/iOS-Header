//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDailyRoutineShortcutSetupQuestion.h>

@class NSArray, NSString, WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion, WFImage;

@interface WFDailyRoutineShortcutSetupActionsQuestion : WFDailyRoutineShortcutSetupQuestion
{
    NSArray *_actions;
    NSString *_addButtonTitle;
    NSString *_skipButtonTitle;
    WFImage *_icon;
    WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *_followUpQuestion;
}

@property (readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (copy, nonatomic) NSString *addButtonTitle; // @synthesize addButtonTitle=_addButtonTitle;
@property (strong, nonatomic) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
@property (strong, nonatomic) WFImage *icon; // @synthesize icon=_icon;
@property (copy, nonatomic) NSString *skipButtonTitle; // @synthesize skipButtonTitle=_skipButtonTitle;

- (void).cxx_destruct;
- (id)initWithPrompt:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;

@end

