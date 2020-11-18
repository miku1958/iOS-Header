//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSObject-Protocol.h>
#import <NewsToday/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSObject, NSString, NSURL, SFSearchResult;
@protocol NTHeadlineAdElement, NTHeadlineAnalyticsElementProviding, NTHeadlinePersonalizationMetadata;

@protocol NTHeadlineProviding <NSObject, NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSURL *NewsURL;
@property (readonly, copy, nonatomic) NSObject<NTHeadlineAdElement> *adElement;
@property (readonly, copy, nonatomic) NSDate *ageDisplayDate;
@property (readonly, copy, nonatomic) NSObject<NTHeadlineAnalyticsElementProviding> *analyticsElement;
@property (readonly, nonatomic) BOOL displaysWithLeadingCellAppearance;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSObject<NTHeadlinePersonalizationMetadata> *personalizationMetadata;
@property (readonly, copy, nonatomic) SFSearchResult *searchResult;
@property (readonly, copy, nonatomic) NSString *shortExcerpt;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceName;
@property (readonly, copy, nonatomic) NSString *sourceNameImageAssetID;
@property (readonly, copy, nonatomic) NSData *sourceNameImageData;
@property (readonly, nonatomic) double sourceNameImageScale;
@property (readonly, copy, nonatomic) NSString *storyType;
@property (readonly, nonatomic) BOOL supportsSavingForLater;
@property (readonly, copy, nonatomic) NSString *thumbnailAssetID;
@property (readonly, copy, nonatomic) NSData *thumbnailData;
@property (readonly, nonatomic) struct CGRect thumbnailFocalFrame;
@property (readonly, nonatomic) unsigned long long thumbnailSizePreset;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double videoDuration;
@property (readonly, copy, nonatomic) NSURL *videoURL;
@property (readonly, copy, nonatomic) NSURL *webURL;

- (void)loadSourceNameImageDataWithFileURL:(NSURL *)arg1;
- (void)loadThumbnailDataWithFileURL:(NSURL *)arg1;
@end

