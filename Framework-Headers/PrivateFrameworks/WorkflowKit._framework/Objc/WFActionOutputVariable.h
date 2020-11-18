//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariable.h>

@class NSString, WFAction;
@protocol WFVariableProvider;

@interface WFActionOutputVariable : WFVariable
{
    id<WFVariableProvider> _variableProvider;
    WFAction *_action;
}

@property (readonly, weak, nonatomic) WFAction *action; // @synthesize action=_action;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *outputUUID;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)icon;
- (id)initWithAction:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;
- (id)initWithOutputUUID:(id)arg1 outputName:(id)arg2 variableProvider:(id)arg3 aggrandizements:(id)arg4;
- (BOOL)isAvailable;
- (id)possibleContentClassesWithContext:(id)arg1;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)variableProvider;
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;

@end
