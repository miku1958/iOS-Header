//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

#import <MediaPlaybackCore/MPCModelPlaybackRequestEnvironmentConsuming-Protocol.h>
#import <MediaPlaybackCore/MPCModelPlaybackRequesting-Protocol.h>
#import <MediaPlaybackCore/MPCModelRequestRTCReporting-Protocol.h>
#import <MediaPlaybackCore/MPCModelStorePreviousRequestStoring-Protocol.h>
#import <MediaPlaybackCore/MPModelRequestDetailedKeepLocalStatusRequesting-Protocol.h>

@class MPCPlaybackRequestEnvironment, MPModelResponse, MPSectionedCollection, NSArray, NSString;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequesting, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring>
{
    BOOL _shouldBatchResultsWithPlaceholderObjects;
    BOOL _wantsDetailedKeepLocalRequestableResponse;
    BOOL _allowLocalEquivalencies;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPModelResponse *_previousResponse;
    NSString *_clientIdentifier;
    MPSectionedCollection *_sectionedModelObjects;
    NSArray *_storeIDs;
    NSArray *_playbackPrioritizedIndexPaths;
}

@property (nonatomic) BOOL allowLocalEquivalencies; // @synthesize allowLocalEquivalencies=_allowLocalEquivalencies;
@property (copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths; // @synthesize playbackPrioritizedIndexPaths=_playbackPrioritizedIndexPaths;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
@property (readonly, nonatomic) MPSectionedCollection *playbackSourceModelObjects;
@property (strong, nonatomic) MPModelResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects; // @synthesize sectionedModelObjects=_sectionedModelObjects;
@property (nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects; // @synthesize shouldBatchResultsWithPlaceholderObjects=_shouldBatchResultsWithPlaceholderObjects;
@property (copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;

+ (void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)setAllowsPlaybackResponseBatching:(BOOL)arg1;

@end

