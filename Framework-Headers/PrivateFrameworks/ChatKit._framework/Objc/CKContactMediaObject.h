//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKCardMediaObject.h>

@class CNContactVCardSummary, NSDictionary, UIImage;

@interface CKContactMediaObject : CKCardMediaObject
{
    BOOL _vCardParsingFailed;
    NSDictionary *_contactMediaInfo;
    unsigned long long _oopPreviewRequestCount;
    CNContactVCardSummary *_vCardSummary;
    UIImage *_vCardImage;
}

@property (strong, nonatomic) NSDictionary *contactMediaInfo; // @synthesize contactMediaInfo=_contactMediaInfo;
@property (nonatomic) unsigned long long oopPreviewRequestCount; // @synthesize oopPreviewRequestCount=_oopPreviewRequestCount;
@property (strong, nonatomic) UIImage *vCardImage; // @synthesize vCardImage=_vCardImage;
@property (nonatomic) BOOL vCardParsingFailed; // @synthesize vCardParsingFailed=_vCardParsingFailed;
@property (strong, nonatomic) CNContactVCardSummary *vCardSummary; // @synthesize vCardSummary=_vCardSummary;

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;
- (void).cxx_destruct;
- (id)_transcodeControllerSharedInstance;
- (id)attachmentSummary:(unsigned long long)arg1;
- (struct CGSize)bbSize;
- (Class)coloredBalloonViewClass;
- (id)contactCardPayloadFileURL:(id)arg1;
- (void)generateOOPPreview;
- (BOOL)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)icon;
- (int)mediaType;
- (id)metricsCollectorMediaType;
- (Class)previewBalloonViewClass;
- (id)previewCacheKey;
- (id)previewDispatchCache;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)subtitle;
- (BOOL)supportsBlastDoor;
- (id)title;
- (id)vCardImageOfSize:(struct CGSize)arg1;

@end

