//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSignificantEventFaceClassificationResolver, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingSessionSignificantEventManager : HMFObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_logIdentifier;
    HMDCameraSignificantEventFaceClassificationResolver *_faceClassificationResolver;
    NSMutableArray *_significantEvents;
    CDUnknownBlockType _significantEventUUIDFactory;
    CDUnknownBlockType _faceClassificationUUIDFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // @synthesize faceClassificationResolver=_faceClassificationResolver;
@property (copy) CDUnknownBlockType faceClassificationUUIDFactory; // @synthesize faceClassificationUUIDFactory=_faceClassificationUUIDFactory;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property (copy) CDUnknownBlockType significantEventUUIDFactory; // @synthesize significantEventUUIDFactory=_significantEventUUIDFactory;
@property (readonly) NSMutableArray *significantEvents; // @synthesize significantEvents=_significantEvents;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)_faceRecognitionSignificantEventsForAnalyzerEvent:(id)arg1 dateOfOccurrence:(id)arg2 heroFrameData:(id)arg3 timeOffsetWithinClip:(double)arg4 confidenceLevel:(unsigned long long)arg5;
- (id)_filteredAndUpdatedSignificantEventsFromSignificantEvents:(id)arg1;
- (id)_filteredFaceClassificationsFromFaceClassifications:(id)arg1;
- (id)_significantEventsForAnalyzerEvent:(id)arg1 dateOfOccurrence:(id)arg2 heroFrameData:(id)arg3 timeOffsetWithinClip:(double)arg4 recordingEventTriggers:(unsigned long long)arg5;
- (id)_significantEventsForEmptyAnalyzerResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3;
- (id)_significantEventsForFrameResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3 recordingEventTriggers:(unsigned long long)arg4;
- (id)initWithWorkQueue:(id)arg1 faceClassificationResolver:(id)arg2 logIdentifier:(id)arg3;
- (BOOL)isAnyEventInAnalyzerResult:(id)arg1 includedInRecordingEventTriggers:(unsigned long long)arg2;
- (void)resetState;
- (id)significantEventsForAnalyzerResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(double)arg3 recordingEventTriggers:(unsigned long long)arg4;

@end
