//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFAddNewEventAction : WFAction
{
}

+ (double)relativeOffsetFromTimeString:(id)arg1;
- (id)endDateByCorrectingDate:(id)arg1 withStartDate:(id)arg2;
- (void)initializeParameters;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateCalendars;
- (void)updateForcesAllDayFlags;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
