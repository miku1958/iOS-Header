//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;
@protocol OS_dispatch_group;

@interface PLPhotosStateLog : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, strong, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property (readonly, strong, nonatomic) PLPhotoLibrary *photoLibrary;

- (void)_logAssets:(id)arg1 forAlbum:(id)arg2 indent:(unsigned long long)arg3;
- (BOOL)compressFileFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)copyFilesMatching:(id)arg1 andExcluding:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 usingCompression:(BOOL)arg5;
- (void)createSnapshot;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)logAlbum:(id)arg1 index:(unsigned long long)arg2 indent:(unsigned long long)arg3 completeMetadata:(BOOL)arg4 printAssets:(BOOL)arg5;
- (void)logAlbumLists;
- (void)logAllAlbums;
- (void)logAssetCounts;
- (void)logDescription:(id)arg1;
- (void)logMoments;

@end

