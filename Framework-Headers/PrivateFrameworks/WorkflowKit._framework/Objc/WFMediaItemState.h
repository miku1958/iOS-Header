//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFMediaItemState : WFVariableSubstitutableParameterState
{
}

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithMediaType:(id)arg1 persistentID:(id)arg2;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;

@end

