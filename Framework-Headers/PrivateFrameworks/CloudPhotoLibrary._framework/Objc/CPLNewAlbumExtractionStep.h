//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@interface CPLNewAlbumExtractionStep : CPLBatchExtractionStep
{
    unsigned long long _maximumCount;
}

@property (readonly, nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;

- (BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithStorage:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)shortDescription;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end

