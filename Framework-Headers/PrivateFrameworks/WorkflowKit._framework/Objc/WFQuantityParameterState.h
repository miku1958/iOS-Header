//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class NSString, WFNumberStringSubstitutableState;

@interface WFQuantityParameterState : NSObject <WFParameterState>
{
    WFNumberStringSubstitutableState *_magnitudeState;
    NSString *_unitString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WFNumberStringSubstitutableState *magnitudeState; // @synthesize magnitudeState=_magnitudeState;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;

+ (Class)processingValueClass;
- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMagnitudeState:(id)arg1 unitString:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)serializedRepresentation;

@end
