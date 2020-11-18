//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/AFDictationDelegate-Protocol.h>

@class AFDictationConnection, AFDictationOptions, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

__attribute__((visibility("hidden")))
@interface UIDictationConnection : NSObject <AFDictationDelegate>
{
    BOOL _receivedMultilingualResultsCommand;
    BOOL _offlineOnly;
    BOOL _lowConfidenceAboutLanguageDetection;
    unsigned int _charBeforeInsertionPointOnDictationStart;
    unsigned int _charAfterInsertionPointOnDictationStart;
    id<UIDictationConnectionDelegate> _delegate;
    id<UIDictationConnectionTokenFilterProtocol> _tokenFilter;
    AFDictationOptions *_dictationOptions;
    AFDictationConnection *_connection;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSString *_lastUsedPrimaryLanguage;
    NSString *_lastUsedDetectedLanguage;
    NSMutableArray *_lastUsedTopLanguages;
    NSMutableDictionary *_lastReceivedPartials;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property (nonatomic) unsigned int charAfterInsertionPointOnDictationStart; // @synthesize charAfterInsertionPointOnDictationStart=_charAfterInsertionPointOnDictationStart;
@property (nonatomic) unsigned int charBeforeInsertionPointOnDictationStart; // @synthesize charBeforeInsertionPointOnDictationStart=_charBeforeInsertionPointOnDictationStart;
@property (strong, nonatomic) AFDictationConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIDictationConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) AFDictationOptions *dictationOptions; // @synthesize dictationOptions=_dictationOptions;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *lastReceivedPartials; // @synthesize lastReceivedPartials=_lastReceivedPartials;
@property (copy, nonatomic) NSString *lastUsedDetectedLanguage; // @synthesize lastUsedDetectedLanguage=_lastUsedDetectedLanguage;
@property (copy, nonatomic) NSString *lastUsedPrimaryLanguage; // @synthesize lastUsedPrimaryLanguage=_lastUsedPrimaryLanguage;
@property (strong, nonatomic) NSMutableArray *lastUsedTopLanguages; // @synthesize lastUsedTopLanguages=_lastUsedTopLanguages;
@property (nonatomic) BOOL lowConfidenceAboutLanguageDetection; // @synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection;
@property (nonatomic) BOOL offlineOnly; // @synthesize offlineOnly=_offlineOnly;
@property (nonatomic) BOOL receivedMultilingualResultsCommand; // @synthesize receivedMultilingualResultsCommand=_receivedMultilingualResultsCommand;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<UIDictationConnectionTokenFilterProtocol> tokenFilter; // @synthesize tokenFilter=_tokenFilter;

+ (void)_updateFromGlobalOptions:(id)arg1;
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
+ (id)analytics;
+ (void)cacheSupportedDictationLanguages;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (BOOL)dictationRestricted;
+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(CDUnknownBlockType)arg3;
+ (BOOL)isDictationAvailable;
- (void).cxx_destruct;
- (id)_createConnectionOptions;
- (id)_dictationOptions:(id)arg1;
- (id)_initializeWithOptions:(id)arg1;
- (id)_speechOptions:(id)arg1;
- (void)_startWithOptions:(id)arg1;
- (float)averagePower;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)cancelSpeech;
- (void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(BOOL)arg4;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
- (void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (BOOL)dictationIsAvailableForLanguage:(id)arg1;
- (void)endSession;
- (id)languageDetectionUserContext;
- (void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4;
- (void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4;
- (void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2;
- (void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2;
- (void)preheat;
- (void)restartDictation;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1;
- (void)start;
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;
- (void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(BOOL)arg4;

@end
