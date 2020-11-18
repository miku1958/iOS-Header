//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPAVItem, NSData, NSDictionary, NSString;

@interface MPPlaybackContext : NSObject <NSSecureCoding>
{
    MPAVItem *_playerCurrentItem;
    BOOL _shouldStartPlayback;
    BOOL _requireFinalTracklist;
    BOOL _shouldRestartPlayback;
    long long _startIndex;
    long long _shuffleType;
    long long _repeatType;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriAssetInfo;
    NSString *_siriReferenceIdentifier;
    NSDictionary *_siriWHAMetricsInfo;
}

@property (copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property (strong, nonatomic) MPAVItem *playerCurrentItem;
@property (nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property (nonatomic) BOOL requireFinalTracklist; // @synthesize requireFinalTracklist=_requireFinalTracklist;
@property (nonatomic) BOOL shouldRestartPlayback; // @synthesize shouldRestartPlayback=_shouldRestartPlayback;
@property (nonatomic) BOOL shouldStartPlayback; // @synthesize shouldStartPlayback=_shouldStartPlayback;
@property (nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property (copy, nonatomic) NSString *siriAssetInfo; // @synthesize siriAssetInfo=_siriAssetInfo;
@property (copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // @synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo;
@property (nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;

+ (Class)queueFeederClass;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

