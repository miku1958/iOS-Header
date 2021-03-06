//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalPerformanceShadersGraph/MPSGraphOperation.h>

@interface MPSGraphRandomUniformOp : MPSGraphOperation
{
    unsigned long long _seed2;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 seed:(unsigned long long)arg4 name:(id)arg5;
- (struct Value)makeMLIROpWithBuilder:(struct OpBuilder *)arg1 symbolTable:(struct MPSSymbolTable *)arg2 inputValues:(vector_c90d9c45 *)arg3 opInitialization:(BOOL)arg4 name:(id)arg5;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;

@end

