//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSpeakerModel;
@protocol CSSpeakerDetectorNDAPIDelegate;

@interface CSSpeakerDetectorNDAPI : NSObject
{
    float _threshold;
    unsigned long long _maxSpeakerVectorsToPersist;
    CSSpeakerModel *_spkModel;
    id<CSSpeakerDetectorNDAPIDelegate> _delegate;
}

@property (weak, nonatomic) id<CSSpeakerDetectorNDAPIDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (BOOL)_initializeNDAPI:(id)arg1 resourcePath:(id)arg2;
- (BOOL)_initializeSAT:(id)arg1;
- (BOOL)addLastTriggerToProfile;
- (BOOL)addLastTriggerToProfileWithSuperVector:(id)arg1;
- (id)analyzeWavForEnrollment:(id)arg1 numSamples:(unsigned long long)arg2;
- (float)computeSATScore:(id)arg1;
- (void)dealloc;
- (unsigned long long)getMaxSpeakerVectorsToPersist;
- (float)getRejectLoggingThreshold;
- (unsigned long long)getSATVectorCount;
- (float)getSatThreshold;
- (id)initWithAsset:(id)arg1 speakerModel:(id)arg2;
- (void)reset;

@end
