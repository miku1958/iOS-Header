//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

#import <MediaPlayer/MPModelRequestDetailedKeepLocalStatusRequesting-Protocol.h>
#import <MediaPlayer/MPModelRequestRTCReporting-Protocol.h>
#import <MediaPlayer/MPModelStorePreviousRequestStoring-Protocol.h>

@class MPModelResponse, NSArray, NSString;

@interface MPModelStorePlaybackItemsRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting, MPModelStorePreviousRequestStoring, MPModelRequestRTCReporting>
{
    BOOL _allowsMultipleResponseHandlerCalls;
    BOOL _wantsDetailedKeepLocalRequestableResponse;
    BOOL _allowLocalEquivalencies;
    MPModelResponse *_previousResponse;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    NSArray *_storeIDs;
}

@property (nonatomic) BOOL allowLocalEquivalencies; // @synthesize allowLocalEquivalencies=_allowLocalEquivalencies;
@property (nonatomic) BOOL allowsMultipleResponseHandlerCalls; // @synthesize allowsMultipleResponseHandlerCalls=_allowsMultipleResponseHandlerCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPModelResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property (copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end

