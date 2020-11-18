//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, PHAsset, VCPDatabaseReader;

@interface VCPDatabaseBatchIterator : NSObject
{
    VCPDatabaseReader *_reader;
    NSArray *_assets;
    NSSet *_resultsTypes;
    int _batchSize;
    int _idxLast;
    int _idxCurrent;
    NSDictionary *_batchAnalyses;
    PHAsset *_asset;
    NSDictionary *_analysis;
}

@property (readonly, nonatomic) NSDictionary *analysis; // @synthesize analysis=_analysis;
@property (readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;

+ (id)iteratorForAssets:(id)arg1 withDatabaseReader:(id)arg2 resultTypes:(id)arg3 batchSize:(int)arg4;
- (void).cxx_destruct;
- (id)initWithDatabaseReader:(id)arg1 forAssets:(id)arg2 resultsTypes:(id)arg3 batchSize:(int)arg4;
- (BOOL)next;
- (void)nextBatch;

@end
