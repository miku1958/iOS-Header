//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFSpeechInterpretation, AFXPCWrapper, AceObject, INImage, NSArray, NSDictionary, NSError, NSString, NSURL, SASSpeechPartialResult, SASSpeechRecognized;
@protocol SAAceCommand;

@protocol AFClientServiceDelegate <NSObject>
- (oneway void)aceConnectionWillRetryOnError:(NSError *)arg1;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)audioSessionDidEndInterruption:(BOOL)arg1;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)cacheImage:(INImage *)arg1;
- (oneway void)getBulletinContext:(void (^)(NSArray *))arg1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)musicWasDetected;
- (oneway void)requestDidFailWithError:(NSError *)arg1 requestClass:(NSString *)arg2;
- (oneway void)requestDidFinish;
- (oneway void)requestDidReceiveCommand:(AceObject<SAAceCommand> *)arg1 reply:(void (^)(AceObject<SAAceCommand> *))arg2;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(NSString *)arg1 URL:(NSURL *)arg2 reply:(void (^)(BOOL))arg3;
- (oneway void)requestRequestedOpenURL:(NSURL *)arg1 reply:(void (^)(BOOL))arg2;
- (oneway void)setUserActivityInfo:(NSDictionary *)arg1 webpageURL:(NSURL *)arg2;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechRecognized:(SASSpeechRecognized *)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(AFSpeechInterpretation *)arg1 refId:(NSString *)arg2;
- (oneway void)speechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingDidFinishRecognitionUpdateWithError:(NSError *)arg1;
- (oneway void)speechRecordingDidRecognizePhrases:(NSArray *)arg1 utterances:(NSArray *)arg2;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(NSArray *)arg1 utterances:(NSArray *)arg2 refId:(NSString *)arg3;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(void (^)(double, double, NSError *))arg2;
- (oneway void)speechRecordingStartpointDetected;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(NSString *)arg1;
- (oneway void)speechRecordingWillBeginWithLevelsSharedMem:(AFXPCWrapper *)arg1;
@end

