//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFActionProviding-Protocol.h>

@class NSHashTable, NSString;

@interface SBActionHandler : NSObject <SBFActionProviding>
{
    BOOL _capturingDisplayDump;
    NSHashTable *_externalHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_captureRadarAttachmentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeRestartAction:(id)arg1 fromProcess:(id)arg2;
- (void)_reportAndKillInsecureProcesses:(id)arg1;
- (BOOL)_shouldPromptForSecureDrawViolations;
- (void)addActionHandler:(id)arg1;
- (void)handleActions:(id)arg1 origin:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)removeActionHandler:(id)arg1;

@end

