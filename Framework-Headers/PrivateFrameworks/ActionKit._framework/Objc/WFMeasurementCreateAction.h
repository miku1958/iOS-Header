//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFMeasurementCreateAction : WFAction
{
}

- (id)currentUnit;
- (id)currentUnitTypeState;
- (id)currentValue;
- (void)initializeParameters;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)unitParameter;

@end

