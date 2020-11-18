//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFastEnumeration-Protocol.h>
#import <Foundation/NSISRowBody-Protocol.h>

@class NSString;

@interface NSISLinearExpression : NSObject <NSISRowBody, NSFastEnumeration>
{
    unsigned int inline_capacity;
    unsigned int var_count;
    double constant;
    union {
        struct {
            id stored_extern_marker;
            struct *slab;
            unsigned long long capacity;
        } extern_data;
        struct {
            unsigned long long aligner;
        } inline_slab;
        unsigned char padding[48];
    } data;
}

@property double constant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)acquireFromPoolForUseCase:(long long)arg1;
+ (void)initialize;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;
- (void)addExpression:(id)arg1 times:(double)arg2;
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (double)coefficientForVariable:(id)arg1;
- (id)copyContentsAndReturnToPool;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateVariables:(CDUnknownBlockType)arg1;
- (void)enumerateVariablesAndCoefficients:(CDUnknownBlockType)arg1;
- (BOOL)enumerateVariablesAndCoefficientsUntil:(CDUnknownBlockType)arg1;
- (double)incrementConstant:(double)arg1;
- (id)init;
- (id)initWithInlineCapacity:(unsigned long long)arg1;
- (BOOL)isConstant;
- (BOOL)isEqual:(id)arg1;
- (void)removeVariable:(id)arg1;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)returnToPool;
- (void)scaleBy:(double)arg1;
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;
- (unsigned long long)variableCount;
- (id)variablesArray;
- (void)verifyInternalIntegrity;

@end

