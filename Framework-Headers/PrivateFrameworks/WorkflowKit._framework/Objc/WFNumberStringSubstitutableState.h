//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFStringSubstitutableState.h>

@class NSDecimalNumber, NSNumber;

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState
{
    NSNumber *_legacyNumber;
}

@property (readonly, nonatomic) NSDecimalNumber *decimalNumber;
@property (strong, nonatomic) NSNumber *legacyNumber; // @synthesize legacyNumber=_legacyNumber;

+ (Class)processingValueClass;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (id)serializedRepresentation;

@end

