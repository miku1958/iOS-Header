//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@interface MPSNDArrayBinaryKernel : MPSNDArrayMultiaryKernel
{
}

@property (nonatomic) CDStruct_27bd5d57 primaryDilationRates;
@property (nonatomic) unsigned long long primaryEdgeMode;
@property (nonatomic) CDStruct_27bd5d57 primaryKernelSizes;
@property (nonatomic) CDStruct_df9f7954 primaryOffsets;
@property (nonatomic) CDStruct_df9f7954 primaryStrides;
@property (nonatomic) CDStruct_27bd5d57 secondaryDilationRates;
@property (nonatomic) unsigned long long secondaryEdgeMode;
@property (nonatomic) CDStruct_27bd5d57 secondaryKernelSizes;
@property (nonatomic) CDStruct_df9f7954 secondaryOffsets;
@property (nonatomic) CDStruct_df9f7954 secondaryStrides;

- (id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 destinationArray:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id)arg4 destinationArray:(id)arg5;
- (id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id *)arg4 outputStateIsTemporary:(BOOL)arg5;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end
