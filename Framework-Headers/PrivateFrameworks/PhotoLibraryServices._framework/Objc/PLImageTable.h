//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLThumbPersistenceManager-Protocol.h>

@class NSMutableArray, NSString;

@interface PLImageTable : NSObject <PLThumbPersistenceManager>
{
    NSString *_path;
    int _sideLength;
    BOOL _squareCropped;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
    BOOL _readOnly;
    BOOL _dying;
    int _fid;
    long long _fileLength;
    long long _entryCount;
    unsigned long long _segmentLength;
    long long _segmentCount;
    NSMutableArray *_allSegments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property (readonly) Class superclass;

+ (void)releaseSegmentCache;
- (void)_addEntriesIfNecessaryForIndex:(long long)arg1;
- (BOOL)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id *)arg2;
- (id)_debugDescription;
- (int)_fileDescriptor;
- (void)_flushEntryAtAddress:(void *)arg1;
- (void)_flushEntryAtAddress:(void *)arg1 count:(int)arg2;
- (void)_releaseSegment:(id)arg1;
- (void)_releaseSegmentAtIndex:(long long)arg1;
- (void)_reloadSegmentAtIndex:(long long)arg1;
- (id)_segmentAtIndex:(long long)arg1;
- (unsigned long long)_segmentLength;
- (void)_setEntryCount:(long long)arg1;
- (void)_updateSegmentCount;
- (void)_verifyThumbnailDataForIndex:(unsigned long long)arg1 uuid:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (id)dataForEntryAtIndex:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2;
- (void)dealloc;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (long long)entryCount;
- (void)finishEntryAtIndex:(unsigned long long)arg1 withImageData:(id)arg2 sourceImageSize:(struct CGSize)arg3 assetUUID:(id)arg4;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (struct CGSize)imageSize;
- (id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 sideLengthInPixels:(int)arg3 squareCropped:(BOOL)arg4;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (void)touchEntriesInRange:(struct _NSRange)arg1;
- (BOOL)usesThumbIdentifiers;
- (BOOL)validateData:(id)arg1 withToken:(id)arg2;

@end

