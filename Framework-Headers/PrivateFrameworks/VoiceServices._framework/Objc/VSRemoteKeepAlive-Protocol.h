//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/NSObject-Protocol.h>

@protocol VSRemoteKeepAlive <NSObject>
- (oneway void)cancel;
- (oneway void)maintainWithAudioType:(long long)arg1 keepAudioSessionActive:(BOOL)arg2;
@end
