//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TRIPaths;

@interface TRIClientExperimentStorage : NSObject
{
    id<TRIPaths> _paths;
}

- (void).cxx_destruct;
- (id)_urlForExperiment:(id)arg1;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (id)loadArtifactWithExperiment:(id)arg1 isFilePresent:(BOOL *)arg2;
- (BOOL)removeArtifactWithExperiment:(id)arg1;
- (BOOL)saveArtifact:(id)arg1;

@end

