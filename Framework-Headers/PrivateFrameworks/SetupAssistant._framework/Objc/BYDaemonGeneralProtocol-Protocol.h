//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistant/NSObject-Protocol.h>

@protocol BYDaemonGeneralProtocol <NSObject>
- (void)backupMetadata:(void (^)(NSData *))arg1;
- (void)observeFinishSetupTriggers;
- (void)setupAssistantNeedsToRun:(void (^)(BOOL))arg1;
@end

