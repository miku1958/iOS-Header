//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFLocationParameterState : WFVariableSubstitutableParameterState
{
}

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)getContentCollectionWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getContentItemFromValue:(id)arg1 withContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithValue:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;

@end

