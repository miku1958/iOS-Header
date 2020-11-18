//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSMutableArray;

@interface AXMAudioSession : NSObject
{
    NSMutableArray *_notificationObserverTokens;
    AVAudioSession *_session;
}

@property (strong, nonatomic) NSMutableArray *notificationObserverTokens; // @synthesize notificationObserverTokens=_notificationObserverTokens;
@property (strong, nonatomic) AVAudioSession *session; // @synthesize session=_session;

- (void).cxx_destruct;
- (void)_handleMediaServicesLost;
- (void)_handleMediaServicesReset;
- (void)_handleRouteChanged:(unsigned long long)arg1 previousRoute:(id)arg2;
- (void)_handleSessionInterrupted:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)_handleSilenceSecondaryAudio:(unsigned long long)arg1;
- (id)_stringForRouteChangeReason:(unsigned long long)arg1;
- (BOOL)activateSessionWithError:(id *)arg1;
- (BOOL)deactivateSessionWithError:(id *)arg1;
- (void)dealloc;
- (id)init;

@end
