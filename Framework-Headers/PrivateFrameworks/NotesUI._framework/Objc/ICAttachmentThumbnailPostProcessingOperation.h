//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <NotesUI/ICAttachmentThumbnailOperation-Protocol.h>

@class ICAppearanceInfo, ICThumbnailDataCache, NSMutableArray, NSString, NSURL, UIImage;

@interface ICAttachmentThumbnailPostProcessingOperation : NSOperation <ICAttachmentThumbnailOperation>
{
    BOOL _showAsFileIcon;
    BOOL _isMovie;
    UIImage *_image;
    double _scale;
    ICAppearanceInfo *_appearanceInfo;
    ICThumbnailDataCache *_cache;
    NSString *_cacheKey;
    CDUnknownBlockType _fallbackBlock;
    CDUnknownBlockType _processingBlock;
    NSMutableArray *_completionBlocks;
    NSURL *_mediaURL;
    unsigned long long _imageScaling;
    struct CGSize _minSize;
}

@property (strong, nonatomic) ICAppearanceInfo *appearanceInfo; // @synthesize appearanceInfo=_appearanceInfo;
@property (strong, nonatomic) ICThumbnailDataCache *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property (strong, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property (copy, nonatomic) CDUnknownBlockType fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property (nonatomic) BOOL isMovie; // @synthesize isMovie=_isMovie;
@property (strong, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property (nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property (copy, nonatomic) CDUnknownBlockType processingBlock; // @synthesize processingBlock=_processingBlock;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (nonatomic) BOOL showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;

- (void).cxx_destruct;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlocks:(id)arg7 fallbackBlock:(CDUnknownBlockType)arg8;
- (BOOL)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2;
- (void)main;

@end

