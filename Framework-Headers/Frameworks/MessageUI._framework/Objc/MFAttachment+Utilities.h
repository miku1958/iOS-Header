//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFAttachment.h>

@class NSString;

@interface MFAttachment (Utilities)

@property (strong, nonatomic) NSString *eventID;
@property (strong, nonatomic) NSString *icsRepresentation;
@property (nonatomic) struct CGSize imageDimensions;
@property (strong, nonatomic) NSString *meetingStorePersistentID;

- (id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1;
- (unsigned long long)_imageScale;
- (id)_imageScalingKeyForImageScale:(unsigned long long)arg1;
- (BOOL)_isContentTypeDisplayableByMobileMail;
- (void)_setImageScale:(unsigned long long)arg1;
- (id)className;
- (void)compressContentsWithCompletion:(CDUnknownBlockType)arg1;
- (double)constrainedWidth;
- (id)contentType;
- (void)decompressContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueScaleAttachmentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)filenameStrippingZipIfNeededUseApplications:(BOOL)arg1;
- (BOOL)hasCalendarMetadata;
- (struct CGSize)imageDimensionsWithData:(id)arg1;
- (unsigned long long)imageScalingFlags;
- (BOOL)isCalendarFile;
- (BOOL)isContentCompressed;
- (BOOL)isContentOpenable;
- (BOOL)isDisplayableByWebKit;
- (BOOL)isDisplayableImage;
- (BOOL)isDisplayableInline;
- (BOOL)isDisplayableInlineWithData:(id)arg1;
- (BOOL)isDisplayableInsidePlugin;
- (BOOL)isMedia;
- (BOOL)isPDFFile;
- (BOOL)isRFC822;
- (BOOL)isRestrictedMIMEType;
- (BOOL)isSupportedImageType;
- (struct CGSize)markupSizeForImageScale:(unsigned long long)arg1;
- (id)markupStringForCompositionWithPrependedBlankLine:(BOOL)arg1 imageScale:(unsigned long long)arg2;
- (id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(double)arg3 useEdgeToEdgeFormattingIfApplicable:(BOOL)arg4;
- (unsigned long long)scaleImageToFit:(unsigned long long)arg1 saveScaledImage:(BOOL)arg2;
- (unsigned long long)scaledFileSize;
@end

