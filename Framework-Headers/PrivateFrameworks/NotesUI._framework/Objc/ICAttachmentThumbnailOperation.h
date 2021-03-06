//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <NotesUI/ICAttachmentThumbnailOperation-Protocol.h>

@class ICAppearanceInfo, ICAttachmentPreviewImageLoader, ICAttachmentThumbnailOperationQueue, ICThumbnailDataCache, NSManagedObjectID, NSMutableArray, NSString, NSURL;

@interface ICAttachmentThumbnailOperation : NSOperation <ICAttachmentThumbnailOperation>
{
    BOOL _attachmentPropertiesCaptured;
    BOOL _showAsFileIcon;
    BOOL _isMovie;
    double _scale;
    ICAppearanceInfo *_appearanceInfo;
    ICThumbnailDataCache *_cache;
    NSString *_cacheKey;
    CDUnknownBlockType _fallbackBlock;
    CDUnknownBlockType _processingBlock;
    ICAttachmentThumbnailOperationQueue *_queue;
    NSMutableArray *_completionBlocks;
    NSManagedObjectID *_attachmentID;
    ICAttachmentPreviewImageLoader *_attachmentPreviewImageLoader;
    NSURL *_mediaURL;
    unsigned long long _imageScaling;
    struct CGSize _minSize;
}

@property (strong, nonatomic) ICAppearanceInfo *appearanceInfo; // @synthesize appearanceInfo=_appearanceInfo;
@property (strong, nonatomic) NSManagedObjectID *attachmentID; // @synthesize attachmentID=_attachmentID;
@property (strong, nonatomic) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader; // @synthesize attachmentPreviewImageLoader=_attachmentPreviewImageLoader;
@property (nonatomic) BOOL attachmentPropertiesCaptured; // @synthesize attachmentPropertiesCaptured=_attachmentPropertiesCaptured;
@property (strong, nonatomic) ICThumbnailDataCache *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property (strong, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property (copy, nonatomic) CDUnknownBlockType fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property (nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property (nonatomic) BOOL isMovie; // @synthesize isMovie=_isMovie;
@property (strong, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property (nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property (copy, nonatomic) CDUnknownBlockType processingBlock; // @synthesize processingBlock=_processingBlock;
@property (weak, nonatomic) ICAttachmentThumbnailOperationQueue *queue; // @synthesize queue=_queue;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (nonatomic) BOOL showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;

- (void).cxx_destruct;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)capturePropertiesFromAttachment:(id)arg1;
- (id)initWithAttachment:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 processingBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8 fallbackBlock:(CDUnknownBlockType)arg9 queue:(id)arg10;
- (BOOL)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2;
- (void)main;
- (void)requestThumbnail;

@end

