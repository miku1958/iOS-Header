//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, PHAsset, PHAssetCollection;

__attribute__((visibility("hidden")))
@interface _PUPhotosGridProgressInfo : NSObject
{
    NSString *_identifier;
    PHAsset *_asset;
    PHAssetCollection *_collection;
    NSIndexPath *_cachedIndexPath;
    double _progress;
}

@property (strong, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (strong, nonatomic) NSIndexPath *cachedIndexPath; // @synthesize cachedIndexPath=_cachedIndexPath;
@property (strong, nonatomic) PHAssetCollection *collection; // @synthesize collection=_collection;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) double progress; // @synthesize progress=_progress;

- (void).cxx_destruct;

@end

