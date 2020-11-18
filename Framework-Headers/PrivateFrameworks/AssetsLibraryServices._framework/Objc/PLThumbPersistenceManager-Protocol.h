//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSIndexSet, NSString, PLImageContainer;

@protocol PLThumbPersistenceManager <NSObject>

@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) NSString *path;

- (NSString *)_debugDescription;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(NSString *)arg1;
- (struct CGImage *)createImageWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(NSString *)arg1 withToken:(id)arg2;
- (NSData *)imageDataWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (void)preheatDataForThumbnailIndexes:(NSIndexSet *)arg1;
- (BOOL)usesThumbIdentifiers;
- (BOOL)validateData:(NSData *)arg1 withToken:(NSString *)arg2;

@optional
- (void)deleteEntryWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 uuid:(NSString *)arg3;
- (BOOL)setImageForEntry:(PLImageContainer *)arg1 withIdentifier:(NSString *)arg2 orIndex:(unsigned long long)arg3 photoUUID:(NSString *)arg4 options:(NSDictionary *)arg5;
- (NSString *)thumbnailPathForThumbIdentifier:(NSString *)arg1;
@end
