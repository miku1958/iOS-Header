//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPCAssistantPlaybackQueue : NSObject
{
    BOOL _shouldOverrideManuallyCuratedQueue;
    BOOL _shouldImmediatelyStartPlayback;
    NSString *_contextID;
    NSString *_siriRecommendationID;
    NSString *_siriAssetInfo;
    NSString *_featureName;
    NSDictionary *_siriWHAMetricsInfo;
    ICUserIdentity *_userIdentity;
}

@property (readonly, copy, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property (copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property (nonatomic) BOOL shouldImmediatelyStartPlayback; // @synthesize shouldImmediatelyStartPlayback=_shouldImmediatelyStartPlayback;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue; // @synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue;
@property (copy, nonatomic) NSString *siriAssetInfo; // @synthesize siriAssetInfo=_siriAssetInfo;
@property (copy, nonatomic) NSString *siriRecommendationID; // @synthesize siriRecommendationID=_siriRecommendationID;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // @synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo;
@property (readonly, nonatomic) BOOL supportedOnCurrentPlatform;
@property (copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;

- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)arg1;

@end
