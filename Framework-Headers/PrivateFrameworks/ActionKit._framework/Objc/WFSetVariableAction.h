//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFSetVariableAction : WFAction
{
}

- (id)accessibilityName;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (id)providedVariableNames;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)variableName;

@end

