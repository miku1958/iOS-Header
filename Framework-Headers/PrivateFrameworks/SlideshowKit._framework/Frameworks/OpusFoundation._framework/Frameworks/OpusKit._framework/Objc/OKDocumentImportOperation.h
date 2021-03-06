//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/OFNSOperation.h>

@class NSURL, OKDocument;

@interface OKDocumentImportOperation : OFNSOperation
{
    OKDocument *_document;
    NSURL *_resourceURL;
    NSURL *_importedResourceURL;
    BOOL _opaque;
    NSURL *_temporaryDownloadedMediaFileURL;
    NSURL *_temporaryTranscodedMediaFileURL;
    NSURL *_temporaryThumbnailMediaFileURL;
}

@property (readonly, copy, nonatomic) NSURL *importedResourceURL; // @synthesize importedResourceURL=_importedResourceURL;
@property (strong, nonatomic) NSURL *temporaryDownloadedMediaFileURL; // @synthesize temporaryDownloadedMediaFileURL=_temporaryDownloadedMediaFileURL;
@property (strong, nonatomic) NSURL *temporaryThumbnailMediaFileURL; // @synthesize temporaryThumbnailMediaFileURL=_temporaryThumbnailMediaFileURL;
@property (strong, nonatomic) NSURL *temporaryTranscodedMediaFileURL; // @synthesize temporaryTranscodedMediaFileURL=_temporaryTranscodedMediaFileURL;

- (void)cancelOperation;
- (void)cleanupOperation;
- (void)dealloc;
- (void)finishOperation;
- (id)init;
- (id)initWithDocument:(id)arg1 resourceURL:(id)arg2 importedResourceURL:(id)arg3 opaque:(BOOL)arg4;
- (unsigned long long)launchOperation;

@end

