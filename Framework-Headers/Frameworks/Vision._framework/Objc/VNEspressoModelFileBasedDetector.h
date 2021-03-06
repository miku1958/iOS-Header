//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@class VNEspressoResources;

__attribute__((visibility("hidden")))
@interface VNEspressoModelFileBasedDetector : VNDetector
{
    VNEspressoResources *_espressoResources;
    unsigned long long _networkRequiredInputImageWidth;
    unsigned long long _networkRequiredInputImageHeight;
}

@property (readonly, nonatomic) VNEspressoResources *espressoResources; // @synthesize espressoResources=_espressoResources;
@property (readonly, nonatomic) unsigned long long networkRequiredInputImageHeight; // @synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight;
@property (readonly, nonatomic) unsigned long long networkRequiredInputImageWidth; // @synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth;

+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;
- (BOOL)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (BOOL)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id *)arg4;
- (BOOL)supportsProcessingDevice:(id)arg1;

@end

