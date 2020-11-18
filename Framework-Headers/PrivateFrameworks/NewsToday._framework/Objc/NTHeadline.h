//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTHeadlineProviding-Protocol.h>

@class NSDate, NSString, NSURL, NTHeadlinePersonalizationMetadata, NTPBHeadlineAdElement, NTPBHeadlineAnalyticsElement, NTPBHeadlineBackingElement, SFSearchResult;

@interface NTHeadline : NSObject <NTHeadlineProviding>
{
    BOOL _needsSeenStateTracking;
    BOOL _displaysWithLeadingCellAppearance;
    BOOL _supportsSavingForLater;
    NSString *_title;
    NSString *_titleCompact;
    NSString *_shortExcerpt;
    NSDate *_ageDisplayDate;
    NSString *_sourceName;
    NSString *_sourceIdentifier;
    NSURL *_sourceNameImageRemoteURL;
    double _sourceNameImageScale;
    NSURL *_thumbnailRemoteURL;
    unsigned long long _thumbnailSizePreset;
    NSURL *_webURL;
    NSURL *_NewsURL;
    NSString *_storyType;
    SFSearchResult *_searchResult;
    NSURL *_videoURL;
    double _videoDuration;
    NTPBHeadlineAnalyticsElement *_analyticsElement;
    NTPBHeadlineAdElement *_adElement;
    NTHeadlinePersonalizationMetadata *_personalizationMetadata;
    NTPBHeadlineBackingElement *_backingElement;
    NSURL *_flintDocumentURL;
    NSString *_identifier;
    struct CGRect _thumbnailFocalFrame;
}

@property (copy, nonatomic) NSURL *NewsURL; // @synthesize NewsURL=_NewsURL;
@property (copy, nonatomic) NTPBHeadlineAdElement *adElement; // @synthesize adElement=_adElement;
@property (copy, nonatomic) NSDate *ageDisplayDate; // @synthesize ageDisplayDate=_ageDisplayDate;
@property (copy, nonatomic) NTPBHeadlineAnalyticsElement *analyticsElement; // @synthesize analyticsElement=_analyticsElement;
@property (copy, nonatomic) NTPBHeadlineBackingElement *backingElement; // @synthesize backingElement=_backingElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysWithLeadingCellAppearance; // @synthesize displaysWithLeadingCellAppearance=_displaysWithLeadingCellAppearance;
@property (copy, nonatomic) NSURL *flintDocumentURL; // @synthesize flintDocumentURL=_flintDocumentURL;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long itemType;
@property (nonatomic) BOOL needsSeenStateTracking; // @synthesize needsSeenStateTracking=_needsSeenStateTracking;
@property (copy, nonatomic) NTHeadlinePersonalizationMetadata *personalizationMetadata; // @synthesize personalizationMetadata=_personalizationMetadata;
@property (copy, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property (copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property (copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property (copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property (copy, nonatomic) NSURL *sourceNameImageRemoteURL; // @synthesize sourceNameImageRemoteURL=_sourceNameImageRemoteURL;
@property (nonatomic) double sourceNameImageScale; // @synthesize sourceNameImageScale=_sourceNameImageScale;
@property (copy, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSavingForLater; // @synthesize supportsSavingForLater=_supportsSavingForLater;
@property (nonatomic) struct CGRect thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property (copy, nonatomic) NSURL *thumbnailRemoteURL; // @synthesize thumbnailRemoteURL=_thumbnailRemoteURL;
@property (nonatomic) unsigned long long thumbnailSizePreset; // @synthesize thumbnailSizePreset=_thumbnailSizePreset;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *titleCompact; // @synthesize titleCompact=_titleCompact;
@property (nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property (copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property (copy, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

