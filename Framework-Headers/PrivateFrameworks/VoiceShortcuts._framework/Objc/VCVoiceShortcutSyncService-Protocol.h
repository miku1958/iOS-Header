//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/NSObject-Protocol.h>

@class NSString;

@protocol VCVoiceShortcutSyncService <NSObject>

@property (readonly, nonatomic) BOOL hasBeenStarted;
@property (readonly, nonatomic) NSString *syncServiceIdentifier;

- (void)requestFullResync;
- (void)requestSync;
- (BOOL)startSyncService:(id *)arg1;
- (void)voiceShortcutsDidChange;
@end

