//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShazamKit/SHRemoteStore.h>

@class SHProxyMatcher;

@interface SHAudioMatchingRemoteStore : SHRemoteStore
{
    BOOL _sendNotifications;
    SHProxyMatcher *_proxyMatcher;
}

@property (strong, nonatomic) SHProxyMatcher *proxyMatcher; // @synthesize proxyMatcher=_proxyMatcher;
@property (nonatomic) BOOL sendNotifications; // @synthesize sendNotifications=_sendNotifications;

- (void).cxx_destruct;
- (id)createMatcher;
- (void)startMatching;
- (void)startMatchingUntilDeadline:(id)arg1;
- (void)startMatchingUntilResultFound;
- (void)startOneMatchAttempt;
- (void)stop;

@end

