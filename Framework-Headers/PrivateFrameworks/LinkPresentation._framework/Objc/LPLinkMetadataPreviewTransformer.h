//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPImage, LPLinkMetadata, NSString, NSURL;

@interface LPLinkMetadataPreviewTransformer : NSObject
{
    LPLinkMetadata *_metadata;
    NSURL *_URL;
}

@property (readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property (readonly, strong, nonatomic) LPImage *previewImage;
@property (readonly, copy, nonatomic) NSString *previewSummary;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)arg1 URL:(id)arg2;

@end

