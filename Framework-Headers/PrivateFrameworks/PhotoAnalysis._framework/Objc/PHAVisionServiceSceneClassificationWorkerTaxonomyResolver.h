//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PLPhotoAnalysisServiceTaxonomyResolver-Protocol.h>

@class PHAVisionServiceSceneClassificationWorker;

@interface PHAVisionServiceSceneClassificationWorkerTaxonomyResolver : NSObject <PLPhotoAnalysisServiceTaxonomyResolver>
{
    PHAVisionServiceSceneClassificationWorker *_sceneClassificationWorker;
}

@property (readonly, weak) PHAVisionServiceSceneClassificationWorker *sceneClassificationWorker; // @synthesize sceneClassificationWorker=_sceneClassificationWorker;

- (void).cxx_destruct;
- (id)initWithSceneClassificationWorker:(id)arg1;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (id)sceneTaxonomyHash;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id *)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;

@end

