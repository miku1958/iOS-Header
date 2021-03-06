//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class WFParameter;
@protocol WFPropertyListObject, WFVariableProvider;

@protocol WFVariableSerialization <NSObject>
- (id)initWithSerializedRepresentation:(id<WFPropertyListObject>)arg1 variableProvider:(id<WFVariableProvider>)arg2 parameter:(WFParameter *)arg3;
- (id<WFPropertyListObject>)serializedRepresentation;
@end

