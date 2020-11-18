//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/WFParameterComponent.h>

@class WFArrayParameter, WFArrayParameterState;

@interface WFArrayParameterComponent : WFParameterComponent
{
    WFArrayParameterState *_state;
    WFArrayParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

@property (readonly, weak, nonatomic) WFArrayParameter *parameter; // @synthesize parameter=_parameter;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (BOOL)standaloneVariablesAsContentItems;
+ (Class)stateClass;
- (void).cxx_destruct;
- (void)arrayEditor:(id)arg1 confirmDeletion:(id)arg2;
- (void)notifyParameterObserverWithValues:(id)arg1 updateItem:(id)arg2;
- (CDUnknownBlockType)updateBlock;

@end
