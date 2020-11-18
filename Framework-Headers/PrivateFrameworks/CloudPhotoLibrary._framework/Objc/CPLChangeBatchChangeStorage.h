//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeStorage.h>

@class CPLChangeBatch, NSDictionary, NSString;

@interface CPLChangeBatchChangeStorage : CPLChangeStorage
{
    NSDictionary *_changesPerScopedIdentifier;
    NSString *_storageDescription;
    CPLChangeBatch *_batch;
}

@property (readonly, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;

- (void).cxx_destruct;
- (id)changeWithScopedIdentifier:(id)arg1;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)initWithBatch:(id)arg1 name:(id)arg2;
- (id)storageDescription;

@end
