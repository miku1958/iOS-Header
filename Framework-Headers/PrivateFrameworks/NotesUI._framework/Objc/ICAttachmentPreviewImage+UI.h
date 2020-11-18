//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentPreviewImage.h>

@class UIImage;

@interface ICAttachmentPreviewImage (UI)

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImage *orientedImage;

+ (id)imageCache;
+ (struct UIImage *)orientedImage:(struct UIImage *)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;
- (CDUnknownBlockType)asyncImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2;
- (struct UIImage *)cachedImage;
- (struct UIImage *)cachedOrientedImage;
- (void)clearCachedImage;
- (void)clearCachedOrientedImage;
- (BOOL)hasCachedImage;
- (struct UIImage *)imageWithBackground:(int)arg1;
- (id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1;
- (id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1 asyncDataLoading:(BOOL)arg2;
- (id)orientedImageID;
- (struct CGAffineTransform)orientedImageTransform;
- (struct UIImage *)orientedImageWithBackground:(int)arg1;
- (long long)previewImageOrientation;
- (void)setCachedImage:(struct UIImage *)arg1;
- (void)setCachedOrientedImage:(struct UIImage *)arg1;
- (void)writeOrientedPreviewToDisk;
@end
