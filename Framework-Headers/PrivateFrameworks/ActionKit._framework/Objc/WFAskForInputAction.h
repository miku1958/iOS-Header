//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction
{
    long long _datePickerMode;
}

@property (readonly, nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property (readonly, nonatomic) NSString *defaultAnswer;
@property (readonly, nonatomic) BOOL immediatelyActivateWatchDictation;
@property (readonly, nonatomic) NSString *inputType;
@property (readonly, nonatomic) NSString *promptText;

- (id)datePickerModeFromInputType:(id)arg1;
- (void)finishRunningWithDate:(id)arg1;
- (void)finishRunningWithResultText:(id)arg1;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;
- (BOOL)shouldCreateIntentAvailableResource;

@end
