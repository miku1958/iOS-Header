//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLClassifier-Protocol.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLClassifier : MLModel <MLClassifier>
{
}

@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;
@property (strong, nonatomic) MLModelDescription *modelDescription;

+ (id)predictionFromFeatures:(id)arg1 classifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)classLabels;
- (id)classifierResultFromOutputFeatures:(id)arg1 error:(id *)arg2;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 error:(id *)arg4;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
