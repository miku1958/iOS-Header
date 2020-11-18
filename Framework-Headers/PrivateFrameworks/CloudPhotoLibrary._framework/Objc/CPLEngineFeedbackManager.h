//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineLibrary, NSArray, NSDate, NSMutableArray, NSURL;
@protocol CPLEngineTransportSendFeedbackTask, OS_dispatch_queue;

@interface CPLEngineFeedbackManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportSendFeedbackTask> _sendTask;
    NSMutableArray *_messagesToSend;
    NSArray *_messagesSending;
    NSDate *_lastAttemptDate;
    NSURL *_feedbackMessagesURL;
    BOOL _closed;
    CPLEngineLibrary *_engineLibrary;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;

- (void).cxx_destruct;
- (void)_appendMessage:(id)arg1;
- (void)_appendMessages:(id)arg1;
- (void)_load;
- (void)_reallySendFeedbackToServer;
- (void)_save;
- (void)_sendFeedbackToServerIfNecessary;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)componentName;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportEndOfReset;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1;
- (void)reportMessage:(id)arg1;
- (void)reportMessages:(id)arg1;
- (void)reportResetType:(id)arg1 reason:(id)arg2;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)sendFeedbackToServerIfNecessary;

@end

