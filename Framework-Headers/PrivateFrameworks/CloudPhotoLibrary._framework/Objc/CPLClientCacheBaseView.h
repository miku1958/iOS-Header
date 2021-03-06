//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordStorageView.h>

@class CPLEngineCloudCache, CPLEngineStore;
@protocol CPLEngineIDMapping;

@interface CPLClientCacheBaseView : CPLRecordStorageView
{
    CPLEngineStore *_store;
    CPLEngineCloudCache *_cloudCache;
    id<CPLEngineIDMapping> _idMapping;
}

@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping; // @synthesize idMapping=_idMapping;
@property (readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;

- (void).cxx_destruct;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)description;
- (BOOL)hasRecordWithScopedIdentifier:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)recordViewWithScopedIdentifier:(id)arg1;
- (id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;

@end

