//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/NSSecureCoding-Protocol.h>

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
    NSURL *_audioURL;
    NSURL *_staticImageURL;
    NSURL *_logoImageURL;
    NSString *_headlineForLCD;
    NSString *_descriptionForLCD;
    NSArray *_nativeMetadata;
    NSDictionary *_transparencyDetails;
    NSDictionary *_nativeMediaCreativeMetadata;
    NSURL *_contentURL;
    NSString *_contentString;
    long long _maximumPretapRequestCount;
    NSArray *_matchClauses;
    NSArray *_excludeTags;
    long long _adPrivacyMarkPosition;
    struct CGSize _portraitSize;
    struct CGSize _landscapeSize;
    struct CGSize _containerSize;
}

@property (copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (nonatomic) BOOL adLibManagedVideo; // @synthesize adLibManagedVideo=_adLibManagedVideo;
@property (nonatomic) long long adPrivacyMarkPosition; // @synthesize adPrivacyMarkPosition=_adPrivacyMarkPosition;
@property (strong, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property (copy, nonatomic) NSString *batchResponseIdentifier; // @synthesize batchResponseIdentifier=_batchResponseIdentifier;
@property (nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property (strong, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property (strong, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property (copy, nonatomic) NSString *descriptionForLCD; // @synthesize descriptionForLCD=_descriptionForLCD;
@property (strong, nonatomic) NSArray *excludeTags; // @synthesize excludeTags=_excludeTags;
@property (nonatomic) BOOL hasAction; // @synthesize hasAction=_hasAction;
@property (copy, nonatomic) NSString *headlineForLCD; // @synthesize headlineForLCD=_headlineForLCD;
@property (nonatomic) struct CGSize landscapeSize; // @synthesize landscapeSize=_landscapeSize;
@property (strong, nonatomic) NSURL *logoImageURL; // @synthesize logoImageURL=_logoImageURL;
@property (strong, nonatomic) NSArray *matchClauses; // @synthesize matchClauses=_matchClauses;
@property (nonatomic) long long maximumPretapRequestCount; // @synthesize maximumPretapRequestCount=_maximumPretapRequestCount;
@property (strong, nonatomic) NSDictionary *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property (nonatomic) double minimumIntervalBetweenPresentations; // @synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations;
@property (strong, nonatomic) NSDictionary *nativeMediaCreativeMetadata; // @synthesize nativeMediaCreativeMetadata=_nativeMediaCreativeMetadata;
@property (strong, nonatomic) NSArray *nativeMetadata; // @synthesize nativeMetadata=_nativeMetadata;
@property (nonatomic) struct CGSize portraitSize; // @synthesize portraitSize=_portraitSize;
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

