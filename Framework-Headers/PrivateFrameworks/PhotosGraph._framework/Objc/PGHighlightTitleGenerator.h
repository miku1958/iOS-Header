//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGTitleTuple, PHAsset, PHAssetCollection;
@protocol PGEventEnrichment;

@interface PGHighlightTitleGenerator : NSObject
{
    BOOL _createVerboseTitle;
    id<PGEventEnrichment> _collection;
    PHAssetCollection *_curatedAssetCollection;
    PHAsset *_keyAsset;
    PGTitleTuple *_titleTuple;
}

@property (strong, nonatomic) id<PGEventEnrichment> collection; // @synthesize collection=_collection;
@property (nonatomic) BOOL createVerboseTitle; // @synthesize createVerboseTitle=_createVerboseTitle;
@property (strong, nonatomic) PHAssetCollection *curatedAssetCollection; // @synthesize curatedAssetCollection=_curatedAssetCollection;
@property (strong, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property (strong, nonatomic) PGTitleTuple *titleTuple; // @synthesize titleTuple=_titleTuple;

+ (BOOL)collectionContainsAppleEvent:(id)arg1;
+ (id)commonMeaningLabelForTitleUsingMomentNodes:(id)arg1;
+ (id)meaningLabelsSortedByPriority;
- (void).cxx_destruct;
- (void)_generateTitleTuples;
- (id)initWithCollection:(id)arg1 curatedAssetCollection:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4;

@end
