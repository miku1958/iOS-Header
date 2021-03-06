//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding>
{
    BOOL _unbranded;
    BOOL _hasAction;
    BOOL _requiresMRAID;
    BOOL _adLibManagedVideo;
    NSString *_batchResponseIdentifier;
    NSString *_accessibilityLabel;
    double _skipThreshold;
    double _minimumIntervalBetweenPresentations;
    NSArray *_videoAssets;
    NSDictionary *_mediaAsset;
    NSString *_uniqueIdentifier;
    NSArray *_adSpecCreativeSizes;
    NSURL *_audioURL;
    NSURL *_staticImageURL;
    NSURL *_logoImageURL;
    NSString *_headlineForLCD;
    NSString *_descriptionForLCD;
    NSArray *_nativeMetadata;
    NSDictionary *_transparencyDetails;
    NSDictionary *_nativeMediaCreativeMetadata;
    double _portraitWidth;
    double _portraitHeight;
    double _landscapeWidth;
    double _landscapeHeight;
    NSURL *_contentURL;
    NSString *_contentString;
    double _containerWidth;
    double _containerHeight;
    long long _maximumPretapRequestCount;
    NSArray *_matchClauses;
    NSArray *_excludeTags;
    long long _adPrivacyMarkPosition;
}

@property (copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (nonatomic) BOOL adLibManagedVideo; // @synthesize adLibManagedVideo=_adLibManagedVideo;
@property (nonatomic) long long adPrivacyMarkPosition; // @synthesize adPrivacyMarkPosition=_adPrivacyMarkPosition;
@property (strong, nonatomic) NSArray *adSpecCreativeSizes; // @synthesize adSpecCreativeSizes=_adSpecCreativeSizes;
@property (strong, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property (copy, nonatomic) NSString *batchResponseIdentifier; // @synthesize batchResponseIdentifier=_batchResponseIdentifier;
@property (nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property (nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property (strong, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property (strong, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property (copy, nonatomic) NSString *descriptionForLCD; // @synthesize descriptionForLCD=_descriptionForLCD;
@property (strong, nonatomic) NSArray *excludeTags; // @synthesize excludeTags=_excludeTags;
@property (nonatomic) BOOL hasAction; // @synthesize hasAction=_hasAction;
@property (copy, nonatomic) NSString *headlineForLCD; // @synthesize headlineForLCD=_headlineForLCD;
@property (nonatomic) double landscapeHeight; // @synthesize landscapeHeight=_landscapeHeight;
@property (nonatomic) double landscapeWidth; // @synthesize landscapeWidth=_landscapeWidth;
@property (strong, nonatomic) NSURL *logoImageURL; // @synthesize logoImageURL=_logoImageURL;
@property (strong, nonatomic) NSArray *matchClauses; // @synthesize matchClauses=_matchClauses;
@property (nonatomic) long long maximumPretapRequestCount; // @synthesize maximumPretapRequestCount=_maximumPretapRequestCount;
@property (strong, nonatomic) NSDictionary *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property (nonatomic) double minimumIntervalBetweenPresentations; // @synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations;
@property (strong, nonatomic) NSDictionary *nativeMediaCreativeMetadata; // @synthesize nativeMediaCreativeMetadata=_nativeMediaCreativeMetadata;
@property (strong, nonatomic) NSArray *nativeMetadata; // @synthesize nativeMetadata=_nativeMetadata;
@property (nonatomic) double portraitHeight; // @synthesize portraitHeight=_portraitHeight;
@property (nonatomic) double portraitWidth; // @synthesize portraitWidth=_portraitWidth;
@property (nonatomic) BOOL requiresMRAID; // @synthesize requiresMRAID=_requiresMRAID;
@property (nonatomic) double skipThreshold; // @synthesize skipThreshold=_skipThreshold;
@property (strong, nonatomic) NSURL *staticImageURL; // @synthesize staticImageURL=_staticImageURL;
@property (strong, nonatomic) NSDictionary *transparencyDetails; // @synthesize transparencyDetails=_transparencyDetails;
@property (nonatomic) BOOL unbranded; // @synthesize unbranded=_unbranded;
@property (copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (strong, nonatomic) NSArray *videoAssets; // @synthesize videoAssets=_videoAssets;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

