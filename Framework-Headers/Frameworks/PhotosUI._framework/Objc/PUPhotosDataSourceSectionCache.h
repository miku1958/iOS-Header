//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUPhotosDataSourceSectionCache : NSObject
{
    PHFetchResult *_collectionListFetchResult;
    NSDictionary *_assetCollectionToSection;
    long long _estimatedPhotosCount;
    long long _estimatedVideosCount;
    long long _estimatedOtherCount;
}

@property (readonly, nonatomic) NSDictionary *assetCollectionToSection; // @synthesize assetCollectionToSection=_assetCollectionToSection;
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
@property (readonly, nonatomic) long long estimatedOtherCount; // @synthesize estimatedOtherCount=_estimatedOtherCount;
@property (readonly, nonatomic) long long estimatedPhotosCount; // @synthesize estimatedPhotosCount=_estimatedPhotosCount;
@property (readonly, nonatomic) long long estimatedVideosCount; // @synthesize estimatedVideosCount=_estimatedVideosCount;

- (void).cxx_destruct;
- (id)initWithCollectionListFetchResult:(id)arg1;

@end

