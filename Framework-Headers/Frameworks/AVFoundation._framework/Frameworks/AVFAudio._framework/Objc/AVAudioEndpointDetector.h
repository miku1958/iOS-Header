//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFAudio/AVEndpointVADEventHandler-Protocol.h>

@class AVAudioFormat, NSArray, NSString;

@interface AVAudioEndpointDetector : NSObject <AVEndpointVADEventHandler>
{
    void *_impl;
}

@property (readonly, nonatomic) BOOL VADConfigurationIsInitialized;
@property (readonly, nonatomic) AVAudioFormat *audioFormat;
@property (readonly, nonatomic) NSArray *categoryDimensions;
@property (readonly, nonatomic) struct AudioTimeStamp currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int fullCategoryDimension;
@property (readonly, nonatomic) unsigned int fullInterleavedDimension;
@property (readonly, nonatomic) unsigned int fullTimingDimension;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *interleavedCategoryAndTimingDimensions;
@property (readonly, nonatomic) unsigned long long maximumSamplesPerBuffer;
@property (readonly, nonatomic) unsigned int numCategories;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *timingDimensions;

- (const struct VAD3Configuration *)VAD3ConfigurationFromHost;
- (id)categoryNameWhichCorrespondToCategoryNum:(unsigned int)arg1;
- (id)categoryValueNameForCategoryNum:(unsigned int)arg1 categoryValue:(unsigned int)arg2;
- (int)convertToAVVADStateValueThisEDLDecision:(int)arg1;
- (id)createNSMutableArrayFromStdVectorOfFloat32:(const vector_f9ed6fc8 *)arg1;
- (id)createNSMutableArrayFromStdVectorOfFloat64:(const vector_8f06c10f *)arg1;
- (id)createNSMutableArrayFromStdVectorOfUInt32:(const vector_f672cb0f *)arg1;
- (void)dealloc;
- (void)decodeFullWithStateCode:(unsigned int *)arg1 timingCode:(unsigned int *)arg2 fullCode:(unsigned int)arg3;
- (int)decodeOffline;
- (id)decodeState:(unsigned int)arg1;
- (void)decodeStateAndTimingDeinterleaved:(id *)arg1 timingValues:(id *)arg2 fullCode:(unsigned int)arg3;
- (id)decodeStateAndTimingInterleaved:(id)arg1 fullCode:(unsigned int)arg2;
- (id)decodeTiming:(unsigned int)arg1;
- (unsigned int)encodeFullWithStateCode:(unsigned int)arg1 timingCode:(unsigned int)arg2;
- (unsigned int)encodeState:(id)arg1;
- (unsigned int)encodeStateAndTimingDeinterleaved:(id)arg1 timingValues:(id)arg2;
- (unsigned int)encodeStateAndTimingValuesInterleaved:(id)arg1;
- (unsigned int)encodeTiming:(id)arg1;
- (void)handleVADEventOfType:(int)arg1 andOfCategoryNum:(unsigned int)arg2 havingTimeStamp:(double)arg3 andHavingValue:(const void *)arg4;
- (struct EndpointVAD3Host *)host;
- (id)init;
- (unsigned int)numCategoryValuesFromCategoryNum:(unsigned int)arg1;
- (long long)numberFramesInAudioFile:(const struct OpaqueExtAudioFile *)arg1;
- (struct OpaqueExtAudioFile *)openAudioFile:(id)arg1;
- (void)populateFloat32StdVector:(vector_f9ed6fc8 *)arg1 withFloatValuesFromNSArray:(id)arg2;
- (void)populateFloat64StdVector:(vector_8f06c10f *)arg1 withDoubleValuesFromNSArray:(id)arg2;
- (void)populateUInt32StdVector:(vector_f672cb0f *)arg1 withUnsignedIntValuesFromNSArray:(id)arg2;
- (void)printAndLogMessage:(id)arg1;
- (void)printToConsoleEventType:(int)arg1 AVVADStateValue:(int)arg2 eventTimeStampSeconds:(double)arg3 categoryName:(id)arg4 callToAUTime:(double)arg5;
- (int)processAudioBufferList:(struct AudioBufferList *)arg1 ofMaximumCapacity:(unsigned int)arg2 containingPayloadOf:(unsigned int)arg3;
- (int)processAudioFileNamed:(id)arg1 andSaveInOutputObsFeatFilename:(id)arg2 andSaveInOutputULDATFeatFilename:(id)arg3 andSaveInOutputULDATAudioFilename:(id)arg4 andSaveInOutputASAFeatFilename:(id)arg5 andSaveInOutputASAAudioFilename:(id)arg6 accordingToEPFilenamePrefix:(id)arg7 accordingToRawStateFilenamePrefix:(id)arg8 accordingToPostDistFilenamePrefix:(id)arg9;
- (void)registerAUForOSXDevelopment;
- (int)resetAudioUnit;
- (void)resetTimerToZero;
- (void)saveToEndpointerEventLogThis:(int)arg1 ofCategoryNum:(unsigned int)arg2 withTimeStamp:(double)arg3 withCallToAUTime:(double)arg4;
- (void)saveToPosteriorDistributionsLogThisMarginalPosterior:(id)arg1 ofCategoryNum:(unsigned int)arg2 withTimeStamp:(double)arg3;
- (void)saveToRawStatesLogThis:(const unsigned int *)arg1 ofCategoryNum:(unsigned int)arg2 withTimeStamp:(double)arg3;
- (void)saveToRecurrentEventLogThis:(int)arg1 ofCategoryNum:(unsigned int)arg2 withTimeStamp:(double)arg3 withCallToAUTime:(double)arg4;
- (int)setupAudioUnitWithAPListFilename:(id)arg1 anAudioBufferSizeMilliseconds:(double)arg2 aRealtimeOperationMode:(BOOL)arg3 aDecoderLatencyInSecs:(float)arg4 anEndpointerInterspeechWaitTimeSec:(float)arg5 aSmoothingWindowMinSpeechSec:(float)arg6 aSmoothingWindowMinNonspeechSec:(float)arg7;
- (int)tearDownAudioUnit;
- (unsigned int)timingModelOrderForCategoryNum:(unsigned int)arg1;

@end
