//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraClipModelOperation.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraClipSegmentMetadata, HMFTimer, NSData, NSString;

@interface HMDCameraClipAppendAssetOperation : HMDCameraClipModelOperation <HMFTimerDelegate>
{
    unsigned long long _retryPolicy;
    NSString *_streamingAssetPropertyName;
    NSString *_metadataPropertyName;
    NSData *_segmentData;
    HMDCameraClipSegmentMetadata *_segmentMetadata;
    unsigned long long _state;
    HMFTimer *_retryTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *metadataPropertyName; // @synthesize metadataPropertyName=_metadataPropertyName;
@property unsigned long long retryPolicy; // @synthesize retryPolicy=_retryPolicy;
@property (strong) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property (readonly, copy) NSData *segmentData; // @synthesize segmentData=_segmentData;
@property (readonly) HMDCameraClipSegmentMetadata *segmentMetadata; // @synthesize segmentMetadata=_segmentMetadata;
@property unsigned long long state; // @synthesize state=_state;
@property (readonly, copy) NSString *streamingAssetPropertyName; // @synthesize streamingAssetPropertyName=_streamingAssetPropertyName;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_appendToAsset;
- (id)_retryDelayForError:(id)arg1;
- (id)_updateModelMetadata:(id)arg1 streamingAsset:(id)arg2;
- (id)attributeDescriptions;
- (void)finish;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 streamingAssetPropertyName:(id)arg4 metadataPropertyName:(id)arg5 segmentData:(id)arg6 segmentMetadata:(id)arg7 dataSource:(id)arg8;
- (void)main;
- (void)timerDidFire:(id)arg1;

@end
