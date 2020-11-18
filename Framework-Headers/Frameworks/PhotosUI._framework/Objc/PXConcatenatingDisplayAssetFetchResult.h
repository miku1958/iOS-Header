//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXDisplayAssetFetchResult-Protocol.h>

@class NSArray, NSString;
@protocol PXDisplayAsset;

@interface PXConcatenatingDisplayAssetFetchResult : NSObject <PXDisplayAssetFetchResult>
{
    NSArray *_fetchResults;
    long long *_startIndexes;
    long long _subFetchResultsCount;
    long long _count;
}

@property (readonly, nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<PXDisplayAsset> firstObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subFetchResultForIndex:(long long)arg1 localIndex:(long long *)arg2;
- (BOOL)containsObject:(id)arg1;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (void)dealloc;
- (id)initWithFetchResults:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;

@end
