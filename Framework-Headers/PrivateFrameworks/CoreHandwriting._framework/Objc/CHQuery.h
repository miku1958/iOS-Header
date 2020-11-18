//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognitionSessionObserver-Protocol.h>

@class CHRecognitionSession, CHRecognitionSessionResult, NSString;
@protocol CHQueryDelegate, OS_dispatch_queue;

@interface CHQuery : NSObject <CHRecognitionSessionObserver>
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_lastProcessedSessionResult;
    BOOL __queryActive;
    id<CHQueryDelegate> _delegate;
    CHRecognitionSession *_recognitionSession;
}

@property (nonatomic) BOOL _queryActive; // @synthesize _queryActive=__queryActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, strong, nonatomic) NSString *debugName;
@property (nonatomic) id<CHQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, strong, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
@property (readonly) Class superclass;

- (void)_updateForRecognitionSessionResultChangeIfNeeded;
- (void)dealloc;
- (id)init;
- (id)initWithRecognitionSession:(id)arg1;
- (void)pause;
- (void)q_queryResultDidChange;
- (id)q_sessionResult;
- (void)q_setNeedsQueryResultUpdating;
- (void)q_updateQueryResult;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (void)start;
- (void)waitForPendingUpdates;
- (BOOL)wantsHighFrequencyNotifications;

@end

