//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class MLFeatureValue, NSString;

@interface MLScaler : MLModel <MLModelSpecificationLoader>
{
    MLFeatureValue *_shiftValue;
    MLFeatureValue *_scaleValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MLFeatureValue *scaleValue; // @synthesize scaleValue=_scaleValue;
@property (readonly, nonatomic) MLFeatureValue *shiftValue; // @synthesize shiftValue=_shiftValue;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)initWith:(id)arg1 scaleValue:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 error:(id *)arg9;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

