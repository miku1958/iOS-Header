//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/WFParameterComponent.h>

@class WFParameter;

@interface WFTagFieldParameterComponent : WFParameterComponent
{
    WFParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
- (void).cxx_destruct;
- (id)parameter;
- (CDUnknownBlockType)updateBlock;

@end

