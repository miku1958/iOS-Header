//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXHADetectorManagerDelegate-Protocol.h>
#import <HearingUtilities/AXHAListenEngineDelegate-Protocol.h>
#import <HearingUtilities/AXHAUltronModelAssetManagerDelegate-Protocol.h>
#import <HearingUtilities/AXUIClientDelegate-Protocol.h>

@class AXHADetectorManager, AXHAListenEngine, AXHARingBuffer, AXUIClient, AXUltronModelAssetManager, NSFileManager, NSMutableDictionary, NSString, NSUserDefaults, SBSStatusBarStyleOverridesAssertion;
@protocol OS_dispatch_queue;

@interface AXHAUltronController : NSObject <AXHADetectorManagerDelegate, AXHAListenEngineDelegate, AXUIClientDelegate, AXHAUltronModelAssetManagerDelegate>
{
    SBSStatusBarStyleOverridesAssertion *_llStatusBarAssertion;
    AXUIClient *_hearingUIClient;
    AXHAListenEngine *_listener;
    AXHADetectorManager *_detectorManager;
    AXUltronModelAssetManager *_assetManager;
    NSFileManager *_fileManager;
    NSUserDefaults *_defaults;
    double _sampleLength;
    BOOL _assetsReady;
    NSObject<OS_dispatch_queue> *_fileProcessingQueue;
    int _state;
    AXHARingBuffer *_audioRingBuffer;
    NSMutableDictionary *_detectionResultCollection;
    NSMutableDictionary *_currentDetections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_processResult:(id)arg1;
- (void)_recordResultToFile:(id)arg1;
- (void)_setupDetectorManager;
- (void)_startRecording;
- (void)assetsNotReadyForUltronManager:(id)arg1;
- (void)assetsReadyForUltronManager:(id)arg1;
- (void)cleanupUltron;
- (BOOL)cleanupUltronFiles:(id)arg1;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (id)directory;
- (void)enroll;
- (id)getDictionaryForListenType;
- (id)hearingUIClient;
- (id)init;
- (BOOL)isEnrolled;
- (BOOL)isListening;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)receivedCompletion:(id)arg1;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (id)recorderSettings;
- (void)reduceFileDirectorySize;
- (id)retrieveFilesOlderThan:(double)arg1;
- (BOOL)startUltron;
- (BOOL)stopUltron;
- (void)unenroll;

@end
