//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem
{
    FMFLocation *_lastKnownLocation;
}

@property (strong, nonatomic) FMFLocation *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
@property (readonly, weak, nonatomic) NSString *locationText;
@property (readonly, nonatomic) long long offerState;
@property (readonly, weak, nonatomic) IMHandle *sender;
@property (readonly, weak, nonatomic) NSString *titleText;

+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)arg1;
- (void).cxx_destruct;
- (id)_desaturatedImageForImage:(id)arg1;
- (void)_generateMapPreview;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize)arg1;
- (id)_generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2 withCoordinate:(struct CLLocationCoordinate2D)arg3 forState:(long long)arg4;
- (void)_handleLocationDidChangeNotification:(id)arg1;
- (id)_placeholderCacheKey;
- (id)_previewCacheKey:(unsigned long long)arg1;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)arg1;
- (void)dealloc;
- (BOOL)failed;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (BOOL)isFromMe;
- (id)modificationDateForPreview:(id)arg1;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewURL;
- (id)previewURLForWidth:(unsigned long long)arg1;
- (void)savePreview:(id)arg1 toURL:(id)arg2;
- (id)savedPreviewFromURL:(id)arg1;
- (BOOL)shouldUpdatePreviewWithLocation:(id)arg1 lastKnownLocation:(id)arg2 previewURL:(id)arg3;
- (id)time;
- (id)transcriptTraitCollection;

@end
