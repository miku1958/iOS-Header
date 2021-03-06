//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class HMCharacteristic, NSDictionary, NSString;

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState
{
    HMCharacteristic *_characteristic;
    NSString *_homeIdentifier;
    NSDictionary *_serializedCharacteristic;
}

@property (readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (readonly, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property (strong, nonatomic) NSDictionary *serializedCharacteristic; // @synthesize serializedCharacteristic=_serializedCharacteristic;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)serializedRepresentation;

@end

