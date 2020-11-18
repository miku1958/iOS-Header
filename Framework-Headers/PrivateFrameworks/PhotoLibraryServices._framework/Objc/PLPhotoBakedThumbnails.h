//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject
{
    int _format;
    int _singleThumbnailImageLength;
    unsigned long long _count;
    BOOL _dataIsMutable;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    NSMutableDictionary *_options;
    NSData *_optionsData;
    BOOL _optionsAccessed;
    BOOL _missingHeader;
    struct CGSize _size;
}

@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) int bitsPerComponent;
@property (readonly, nonatomic) int bytesPerPixel;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) struct CGRect imageRect;
@property (readonly, strong, nonatomic) NSMutableDictionary *options;
@property (readonly, strong, nonatomic) NSData *optionsData;
@property (readonly, nonatomic) struct CGSize size;

+ (BOOL)_transformForImage:(struct CGImage *)arg1 isCropped:(BOOL)arg2 captureOrientation:(int)arg3 sizeInOut:(struct CGSize *)arg4 contextSizeOut:(struct CGSize *)arg5 transformOut:(struct CGAffineTransform *)arg6;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)_thumbnailData;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2 readOnly:(BOOL)arg3;
- (id)initWithData:(id)arg1 format:(int)arg2;
- (id)initWithData:(id)arg1 format:(int)arg2 readOnly:(BOOL)arg3;
- (id)initWithImages:(id)arg1 format:(int)arg2 orientation:(int *)arg3 options:(id)arg4 delegate:(id)arg5;
- (BOOL)saveToFile:(id)arg1;
- (id)serializedData;
- (char *)thumbnailBytesAtIndex:(long long)arg1;
- (id)thumbnailDataAtIndex:(long long)arg1;
- (struct CGImage *)thumbnailImageAtIndex:(long long)arg1;
- (BOOL)writeBorderedThumbnailOfImage:(struct CGImage *)arg1 toBuffer:(void *)arg2 orientation:(int *)arg3 format:(int)arg4 formatInfo:(const CDStruct_0d559a47 *)arg5 delegate:(id)arg6;

@end

