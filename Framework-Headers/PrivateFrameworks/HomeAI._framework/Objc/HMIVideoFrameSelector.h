//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/HMIVideoProcessingNode.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSMutableArray, NSString;
@protocol HMIMotionDetector, HMIVideoFrameSelectorDelegate;

@interface HMIVideoFrameSelector : HMIVideoProcessingNode <HMFLogging>
{
    id<HMIMotionDetector> _detector;
    NSMutableArray *_candidates;
    BOOL _enabled;
    CDStruct_1b6d18a9 _referenceInterval;
    CDStruct_1b6d18a9 _targetInterval;
    CDStruct_1b6d18a9 _expirationInterval;
    struct opaqueCMSampleBuffer *_reference;
    id<HMIVideoFrameSelectorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMIVideoFrameSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_drainCandidatesThatExpiredBefore:(CDStruct_1b6d18a9)arg1;
- (void)_ensureDetectorForPixelBuffer:(struct __CVBuffer *)arg1;
- (void)_handleReference:(struct opaqueCMSampleBuffer *)arg1 target:(struct opaqueCMSampleBuffer *)arg2;
- (void)dealloc;
- (void)flush;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)init;
- (void)setSampleRate:(double)arg1;

@end

