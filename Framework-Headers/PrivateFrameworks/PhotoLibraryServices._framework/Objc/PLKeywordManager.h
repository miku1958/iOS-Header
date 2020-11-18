//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLGatekeeperClient, PLManagedObjectContext, PLPhotoLibrary;

@interface PLKeywordManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLManagedObjectContext *_libraryContext;
    PLGatekeeperClient *_assetsdClient;
}

+ (id)writeQueue;
- (id)_keywordsForAsset:(id)arg1;
- (id)allKeywords;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)keywordObjectsForKeywords:(id)arg1;
- (id)keywordsForAsset:(id)arg1;
- (id)keywordsForAssetWithUUID:(id)arg1;
- (id)keywordsForAssets:(id)arg1;
- (BOOL)setKeywords:(id)arg1 forAssetUUID:(id)arg2;

@end
