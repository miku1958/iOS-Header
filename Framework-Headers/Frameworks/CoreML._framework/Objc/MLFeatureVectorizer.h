//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class NSArray;

@interface MLFeatureVectorizer : MLModel <MLModelSpecificationLoader>
{
    NSArray *_output_array_shape;
    struct vector<std::__1::pair<unsigned long, unsigned long>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long>>> index_mapping;
    NSArray *_columnNameEncoding;
    NSArray *_dimensionEncoding;
}

@property (readonly, nonatomic) NSArray *columnNameEncoding; // @synthesize columnNameEncoding=_columnNameEncoding;
@property (readonly, nonatomic) NSArray *dimensionEncoding; // @synthesize dimensionEncoding=_dimensionEncoding;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWith:(id)arg1 dimensionEncoding:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)vectorizeOneHotEncoderDict:(id)arg1 index:(unsigned long long)arg2 error:(id *)arg3;

@end
