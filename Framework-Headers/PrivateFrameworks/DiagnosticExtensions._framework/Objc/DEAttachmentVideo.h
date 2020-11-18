//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DiagnosticExtensions/DEAttachmentItem.h>

@class UIImage;

@interface DEAttachmentVideo : DEAttachmentItem
{
    UIImage *_thumbnail;
}

@property (strong, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;

+ (id)attachmentVideoWithAssetURL:(id)arg1 andThumbnail:(id)arg2;
+ (id)attachmentVideoWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)generateThumbnailFromURL:(id)arg1;

@end
