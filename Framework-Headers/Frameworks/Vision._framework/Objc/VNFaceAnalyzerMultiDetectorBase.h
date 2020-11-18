//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector
{
    struct shared_ptr<vision::mod::FaceprintAndAttributes> _mMultiHeadedFaceClassifier;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (const basic_string_view_b5ef0455 *)getModelVersionForOptions:(id)arg1;
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
+ (unsigned long long)numberOfImageChannels;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addFaceAnalysisResultsFromMap:(map_400ffdbf *)arg1 toFaceAttributeObject:(id)arg2 withRequestRevision:(unsigned long long)arg3;
- (BOOL)_isFaceprintJunk:(shared_ptr_0a6daad2)arg1;
- (BOOL)_saveFaceAttributes:(map_400ffdbf *)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)_saveFaceprint:(shared_ptr_0a6daad2)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (BOOL)supportsProcessingDevice:(id)arg1;

@end
