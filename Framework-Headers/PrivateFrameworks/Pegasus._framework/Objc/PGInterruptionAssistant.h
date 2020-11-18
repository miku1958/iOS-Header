//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PGInterruptionAssistant : NSObject
{
    NSMutableDictionary *_reasons;
    BOOL _ignoreFaceTimeCameraInterruptions;
    BOOL _allowsResumingAfterInterruptionEnds;
    BOOL _isInterrupted;
    BOOL _lastInterruptionStateSentToProxy;
    struct os_unfair_lock_s _unfairLock;
}

@property (readonly) BOOL allowsResumingAfterInterruptionEnds;
@property (readonly, getter=isInterrupted) BOOL interrupted;

- (void).cxx_destruct;
- (BOOL)_calculateIsInterrupted;
- (long long)_numberOfInterruptionsForReason:(long long)arg1;
- (long long)addReason:(long long)arg1;
- (id)init;
- (id)initWithExceptionPolicy:(long long)arg1;
- (void)noteDidNotifyProxyOfInterruptionBegan;
- (void)noteDidNotifyProxyOfInterruptionEnded;
- (void)notePictureInPictureSessionDidEnd;
- (long long)removeReason:(long long)arg1;
- (BOOL)shouldNotifyProxyOfInterruptionBegan;
- (BOOL)shouldNotifyProxyOfInterruptionEnded;

@end
