//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableMeasurementAttributeMetadata.h>

@class NSString;

@interface INCodableMeasurementAttributeMetadata (Workflow)

@property (readonly, nonatomic) NSString *wf_measurementType;

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (BOOL)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 codableAttribute:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2;
- (void)wf_updateWithParameterState:(id)arg1;
- (void)wf_updateWithParameterValue:(id)arg1;
@end

