//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class MLModel, NSString;

@interface HMIFaceQualityFilterSVM : HMFObject <HMFLogging>
{
    MLModel *_mlModel;
    MLModel *_scalerModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModel *mlModel; // @synthesize mlModel=_mlModel;
@property (readonly) MLModel *scalerModel; // @synthesize scalerModel=_scalerModel;
@property (readonly) Class superclass;

+ (id)dataScalerInputName;
+ (id)dataScalerOutputName;
+ (id)defaultDataScalerPath;
+ (id)defaultModelPath;
+ (id)logCategory;
+ (id)svmInputName;
+ (id)svmOutputName;
- (void).cxx_destruct;
- (id)initWithModelPath:(id)arg1 dataScalerPath:(id)arg2 error:(id *)arg3;
- (BOOL)predict:(id)arg1 output:(double *)arg2 error:(id *)arg3;

@end
