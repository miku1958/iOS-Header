//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDocCamImageCache, NSArray;

@interface ICDocCamScanCacheItem : NSObject
{
    ICDocCamImageCache *_imageCache;
    NSArray *_docInfos;
}

@property (strong, nonatomic) NSArray *docInfos; // @synthesize docInfos=_docInfos;
@property (strong, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;

- (void).cxx_destruct;
- (void)deleteCacheImages;
- (id)docInfoForScanDataDelegate:(id)arg1;
- (void)doneBuildingCache;
- (id)imageForScanDataDelegateIdentifier:(id)arg1;
- (id)init;
- (id)initWithImageCache:(id)arg1 docInfos:(id)arg2;

@end

