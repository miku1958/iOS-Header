//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/MSStickerPrivate-Protocol.h>

@class CKImageData, NSData, NSError, NSString, NSURL, UIImage;

@interface MSSticker : NSObject <MSStickerPrivate>
{
    NSURL *_imageFileURL;
    NSString *_localizedDescription;
    NSData *_data;
    CKImageData *__imageData;
    NSError *__stickerError;
    UIImage *__thumbnail;
}

@property (strong, nonatomic) CKImageData *_imageData; // @synthesize _imageData=__imageData;
@property (strong, nonatomic) NSError *_stickerError; // @synthesize _stickerError=__stickerError;
@property (strong, nonatomic) UIImage *_thumbnail; // @synthesize _thumbnail=__thumbnail;
@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *imageFileURL; // @synthesize imageFileURL=_imageFileURL;
@property (readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (readonly) Class superclass;

+ (id)MSStickerPreviewCacheKeyForSticker:(id)arg1;
+ (id)stickerWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_generateImageData;
- (void)_generateThumbnail;
- (id)accessibilityLabel;
- (id)initWithContentsOfFileURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 data:(id)arg2 localizedDescription:(id)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;

@end

