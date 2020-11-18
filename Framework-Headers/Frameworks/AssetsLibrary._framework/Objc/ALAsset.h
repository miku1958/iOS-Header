//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ALAssetPrivate;

@interface ALAsset : NSObject
{
    id _internal;
}

@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (strong, nonatomic) ALAssetPrivate *internal; // @synthesize internal=_internal;
@property (readonly, nonatomic) ALAsset *originalAsset;

+ (struct CGSize)largePreviewImageSizeForSize:(struct CGSize)arg1;
- (id)_newContentEditingOutputWithType:(long long)arg1;
- (id)_typeAsString;
- (id)_uuid;
- (struct CGImage *)aspectRatioThumbnail;
- (void)dealloc;
- (id)defaultRepresentation;
- (id)description;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (BOOL)isDeletable;
- (BOOL)isValid;
- (id)representationForUTI:(id)arg1;
- (void)requestDefaultRepresentation;
- (void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setVideoAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (struct CGImage *)thumbnail;
- (id)valueForProperty:(id)arg1;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
