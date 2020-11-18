//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class PHAsset, PHAssetCollection;
@protocol PGEventEnrichment;

@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator
{
    BOOL _debug;
    id<PGEventEnrichment> _collection;
    PHAsset *_keyAsset;
    PHAssetCollection *_curatedAssetCollection;
}

@property (readonly, nonatomic) id<PGEventEnrichment> collection; // @synthesize collection=_collection;
@property (readonly, nonatomic) PHAssetCollection *curatedAssetCollection; // @synthesize curatedAssetCollection=_curatedAssetCollection;
@property (nonatomic, getter=isDebug) BOOL debug; // @synthesize debug=_debug;
@property (readonly, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3;

@end

