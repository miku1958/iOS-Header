//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL, VUIContentMetadata, VUIExtrasInfo;

__attribute__((visibility("hidden")))
@interface VUIVideosPlayable : NSObject
{
    NSDictionary *_videosPlayableDict;
    NSString *_bookmarkID;
    NSURL *_previewArtwork;
    VUIContentMetadata *_metadata;
}

@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSString *bookmarkID; // @synthesize bookmarkID=_bookmarkID;
@property (readonly, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) BOOL disableScrubbing;
@property (readonly, nonatomic) NSURL *downloadURL;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *externalServiceID;
@property (readonly, nonatomic) VUIExtrasInfo *extrasInfo;
@property (readonly, nonatomic) NSDictionary *fpsAdditionalServerParams;
@property (readonly, nonatomic) NSURL *fpsCertificateURL;
@property (readonly, nonatomic) NSURL *fpsKeyServerURL;
@property (readonly, nonatomic) NSURL *fpsNonceURL;
@property (readonly, nonatomic) NSNumber *frequencyOfAgeConfirmation;
@property (readonly, nonatomic) NSURL *hlsURL;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) BOOL isRental;
@property (readonly, nonatomic) BOOL isSubscription;
@property (readonly, nonatomic) BOOL isiTunesPurchaseOrRental;
@property (readonly, nonatomic) NSString *liveStreamServiceID;
@property (readonly, nonatomic) NSDictionary *mediaMetrics;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) VUIContentMetadata *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) NSURL *playbackURL;
@property (readonly, nonatomic) NSURL *previewArtwork; // @synthesize previewArtwork=_previewArtwork;
@property (readonly, nonatomic) NSString *referenceID;
@property (readonly, nonatomic) NSNumber *rentalID;
@property (readonly, nonatomic) NSNumber *requiredAgeForPlayback;
@property (readonly, nonatomic) NSNumber *resumeTime;
@property (readonly, nonatomic) NSDate *resumeTimeTimeStamp;
@property (readonly, nonatomic) NSString *rtcServiceIdentifier;
@property (readonly, nonatomic) NSURL *scrubVideoURL;
@property (readonly, nonatomic) NSString *seasonCanonicalID;
@property (readonly, nonatomic, getter=isSharedPurchase) BOOL sharedPurchase;
@property (readonly, nonatomic) NSString *showCanonicalID;
@property (readonly, nonatomic) NSURL *stopURL;
@property (readonly, nonatomic) NSDictionary *tokenServerParams;
@property (readonly, nonatomic) NSURL *tokenServerURL;
@property (readonly, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, nonatomic) NSDictionary *vpafMetrics;

+ (id)videosPlayablesFromDictionaries:(id)arg1 andMetadataDictionary:(id)arg2;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 andMetadataDictionary:(id)arg2;

@end
