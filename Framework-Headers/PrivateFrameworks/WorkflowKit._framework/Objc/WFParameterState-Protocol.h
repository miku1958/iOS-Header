//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/WFVariableSerialization-Protocol.h>

@class NSArray, WFParameterStateProcessingContext, WFVariable;
@protocol WFPropertyListObject;

@protocol WFParameterState <NSCopying, WFVariableSerialization>
- (NSArray *)containedVariables;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)processWithContext:(WFParameterStateProcessingContext *)arg1 userInputRequiredHandler:(void (^)(id<WFParameterState>))arg2 valueHandler:(void (^)(id<NSSecureCoding>, NSError *))arg3;

@optional
+ (Class)processingValueClass;
+ (NSArray *)processingValueClasses;
- (id)initWithVariable:(WFVariable *)arg1;
- (id<WFPropertyListObject>)legacySerializedRepresentation;
@end

