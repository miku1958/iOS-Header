//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REMLModel.h>

@class NSDictionary;

@interface REMLLinearModel : REMLModel
{
    NSDictionary *_models;
    float _scaleFactor;
    NSDictionary *_nonActionModels;
    float _nonActionScaleFactor;
}

- (void).cxx_destruct;
- (void)_clearCache;
- (void)_clearModel;
- (long long)_getNumberOfCoordinates;
- (BOOL)_loadModelFromURL:(id)arg1 error:(id *)arg2;
- (id)_predictWithFeatures:(id)arg1;
- (BOOL)_saveModelToURL:(id)arg1 error:(id *)arg2;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2;
- (BOOL)requiresDirectory;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3;

@end

