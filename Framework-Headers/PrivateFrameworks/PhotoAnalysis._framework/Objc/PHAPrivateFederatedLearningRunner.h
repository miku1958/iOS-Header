//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, PGFeatureTransformersForFeatureExtractors, PGManager, PHPhotoLibrary;

@interface PHAPrivateFederatedLearningRunner : NSObject
{
    BOOL _shouldAddNoise;
    BOOL _shouldEncrypt;
    BOOL _shouldValidateModel;
    NSArray *_attachmentURLs;
    NSArray *_layersToTrain;
    unsigned long long _numberOfEpochs;
    NSNumber *_learningRate;
    NSString *_modelInputName;
    NSString *_modelOutputName;
    NSString *_lossName;
    NSString *_optimizerName;
    NSString *_iCloudAggServiceKey;
    NSNumber *_clippingNorm;
    NSNumber *_normBinCount;
    NSString *_trainingTask;
    NSString *_fingerprintVersion;
    NSString *_datasetPolicy;
    NSString *_labelPolicy;
    NSString *_positivesDatasetName;
    NSString *_positivesSubsetName;
    NSString *_negativesDatasetName;
    NSString *_negativesSubsetName;
    NSNumber *_totalNumberOfSamples;
    NSNumber *_oversamplingRate;
    PHPhotoLibrary *_photoLibrary;
    PGManager *_graphManager;
    NSNumber *_minProcessedRate;
    PGFeatureTransformersForFeatureExtractors *_transformersForFeatureExtractors;
    NSArray *_augmenters;
    NSDictionary *_filtersByDatasetName;
}

@property (strong, nonatomic) NSArray *attachmentURLs; // @synthesize attachmentURLs=_attachmentURLs;
@property (readonly, nonatomic) NSArray *augmenters; // @synthesize augmenters=_augmenters;
@property (strong, nonatomic) NSNumber *clippingNorm; // @synthesize clippingNorm=_clippingNorm;
@property (strong, nonatomic) NSString *datasetPolicy; // @synthesize datasetPolicy=_datasetPolicy;
@property (readonly, nonatomic) NSDictionary *filtersByDatasetName; // @synthesize filtersByDatasetName=_filtersByDatasetName;
@property (strong, nonatomic) NSString *fingerprintVersion; // @synthesize fingerprintVersion=_fingerprintVersion;
@property (strong, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property (strong, nonatomic) NSString *iCloudAggServiceKey; // @synthesize iCloudAggServiceKey=_iCloudAggServiceKey;
@property (strong, nonatomic) NSString *labelPolicy; // @synthesize labelPolicy=_labelPolicy;
@property (strong, nonatomic) NSArray *layersToTrain; // @synthesize layersToTrain=_layersToTrain;
@property (strong, nonatomic) NSNumber *learningRate; // @synthesize learningRate=_learningRate;
@property (strong, nonatomic) NSString *lossName; // @synthesize lossName=_lossName;
@property (readonly, nonatomic) NSNumber *minProcessedRate; // @synthesize minProcessedRate=_minProcessedRate;
@property (strong, nonatomic) NSString *modelInputName; // @synthesize modelInputName=_modelInputName;
@property (strong, nonatomic) NSString *modelOutputName; // @synthesize modelOutputName=_modelOutputName;
@property (strong, nonatomic) NSString *negativesDatasetName; // @synthesize negativesDatasetName=_negativesDatasetName;
@property (strong, nonatomic) NSString *negativesSubsetName; // @synthesize negativesSubsetName=_negativesSubsetName;
@property (strong, nonatomic) NSNumber *normBinCount; // @synthesize normBinCount=_normBinCount;
@property (nonatomic) unsigned long long numberOfEpochs; // @synthesize numberOfEpochs=_numberOfEpochs;
@property (strong, nonatomic) NSString *optimizerName; // @synthesize optimizerName=_optimizerName;
@property (strong, nonatomic) NSNumber *oversamplingRate; // @synthesize oversamplingRate=_oversamplingRate;
@property (strong, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (strong, nonatomic) NSString *positivesDatasetName; // @synthesize positivesDatasetName=_positivesDatasetName;
@property (strong, nonatomic) NSString *positivesSubsetName; // @synthesize positivesSubsetName=_positivesSubsetName;
@property (nonatomic) BOOL shouldAddNoise; // @synthesize shouldAddNoise=_shouldAddNoise;
@property (nonatomic) BOOL shouldEncrypt; // @synthesize shouldEncrypt=_shouldEncrypt;
@property (nonatomic) BOOL shouldValidateModel; // @synthesize shouldValidateModel=_shouldValidateModel;
@property (strong, nonatomic) NSNumber *totalNumberOfSamples; // @synthesize totalNumberOfSamples=_totalNumberOfSamples;
@property (strong, nonatomic) NSString *trainingTask; // @synthesize trainingTask=_trainingTask;
@property (readonly, nonatomic) PGFeatureTransformersForFeatureExtractors *transformersForFeatureExtractors; // @synthesize transformersForFeatureExtractors=_transformersForFeatureExtractors;

+ (id)_firstAttachmentURLWithSuffixOfName:(id)arg1 attachments:(id)arg2 error:(id *)arg3;
+ (id)_generateEncryptionKeyFromICloudAggServiceKey:(id)arg1 error:(id *)arg2;
+ (BOOL)_generateError:(id *)arg1 errorCode:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
+ (BOOL)_isInternalDevice;
+ (id)_mediaAnalysisProgressForPhotoLibrary:(id)arg1 error:(id *)arg2;
+ (id)_prepareDatasetForTrainingTask:(id)arg1 fingerprintVersion:(id)arg2 datasetPolicy:(id)arg3 labelPolicy:(id)arg4 positivesDatasetName:(id)arg5 positivesSubsetName:(id)arg6 negativesDatasetName:(id)arg7 negativesSubsetName:(id)arg8 totalNumberOfSamples:(id)arg9 oversamplingRate:(id)arg10 photoLibrary:(id)arg11 graphManager:(id)arg12 modelInputName:(id)arg13 labelName:(id)arg14 attachments:(id)arg15 transformersForFeatureExtractors:(id)arg16 augmenters:(id)arg17 filtersByDatasetName:(id)arg18 error:(id *)arg19;
- (void).cxx_destruct;
- (id)initWithAttachmentURLs:(id)arg1 layersToTrain:(id)arg2 numberOfEpochs:(unsigned long long)arg3 learningRate:(id)arg4 modelInputName:(id)arg5 modelOutputName:(id)arg6 lossName:(id)arg7 optimizerName:(id)arg8 iCloudAggServiceKey:(id)arg9 clippingNorm:(id)arg10 normBinCount:(id)arg11 trainingTask:(id)arg12 fingerprintVersion:(id)arg13 datasetPolicy:(id)arg14 labelPolicy:(id)arg15 positivesDatasetName:(id)arg16 positivesSubsetName:(id)arg17 negativesDatasetName:(id)arg18 negativesSubsetName:(id)arg19 totalNumberOfSamples:(id)arg20 oversamplingRate:(id)arg21 photoLibrary:(id)arg22 graphManager:(id)arg23 shouldAddNoise:(BOOL)arg24 shouldEncrypt:(BOOL)arg25 shouldValidateModel:(BOOL)arg26 minProcessedRate:(id)arg27 transformersForFeatureExtractors:(id)arg28 augmenters:(id)arg29 filtersByDatasetName:(id)arg30;
- (id)runWithError:(id *)arg1;

@end

