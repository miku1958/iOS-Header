//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableEnumAttribute.h>

@interface INCodableEnumAttribute (Workflow)
- (id)wf_contentItemForValue:(id)arg1;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (Class)wf_objectClass;
- (id)wf_outputDisplayNameWithLocalizer:(id)arg1;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2;
@end

