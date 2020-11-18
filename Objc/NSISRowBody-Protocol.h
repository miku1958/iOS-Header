//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSISLinearExpression, NSISVariable;

@protocol NSISRowBody <NSObject>
- (void)enumerateVariables:(void (^)(NSISVariable *))arg1;
- (void)removeVariable:(NSISVariable *)arg1;
- (void)replaceVariable:(NSISVariable *)arg1 withExpression:(NSISLinearExpression *)arg2 processVariableNewToReceiver:(void (^)(NSISVariable *))arg3 processVariableDroppedFromReceiver:(void (^)(NSISVariable *))arg4;
- (void)replaceVariable:(NSISVariable *)arg1 withVariablePlusDelta:(double)arg2;
- (void)replaceVariable:(NSISVariable *)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(NSISVariable *)arg3 processVariableNewToReceiver:(void (^)(NSISVariable *))arg4 processVariableDroppedFromReceiver:(void (^)(NSISVariable *))arg5;
- (unsigned long long)variableCount;
@end

