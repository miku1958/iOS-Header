//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeatureVectorGenerator.h>

#import <PhotosGraph/CLLocationManagerDelegate-Protocol.h>

@class NSString;

@interface PGFeatureVectorLiveGenerator : PGFeatureVectorGenerator <CLLocationManagerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_nearestAssetsForCurrentDate:(id)arg1 atLocation:(id)arg2;
- (void)enumerateFeatureVectorsByTypeUsingBlock:(CDUnknownBlockType)arg1;

@end

