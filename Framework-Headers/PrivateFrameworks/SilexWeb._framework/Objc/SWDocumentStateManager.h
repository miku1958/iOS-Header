//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWDocumentStateProviding-Protocol.h>
#import <SilexWeb/SWDocumentStateReporting-Protocol.h>
#import <SilexWeb/WKScriptMessageHandler-Protocol.h>

@class NFStateMachine, NSMutableArray, NSString, WKUserContentController;

@interface SWDocumentStateManager : NSObject <WKScriptMessageHandler, SWDocumentStateProviding, SWDocumentStateReporting>
{
    WKUserContentController *_userContentController;
    NSMutableArray *_onReadyBlocks;
    NSMutableArray *_onLoadBlocks;
    NSMutableArray *_onUnloadBlocks;
    NFStateMachine *_stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableArray *onLoadBlocks; // @synthesize onLoadBlocks=_onLoadBlocks;
@property (readonly, nonatomic) NSMutableArray *onReadyBlocks; // @synthesize onReadyBlocks=_onReadyBlocks;
@property (readonly, nonatomic) NSMutableArray *onUnloadBlocks; // @synthesize onUnloadBlocks=_onUnloadBlocks;
@property (readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserContentController *userContentController; // @synthesize userContentController=_userContentController;

- (void).cxx_destruct;
- (void)documentIsReady;
- (void)documentStartedLoading;
- (void)documentWillUnload;
- (id)initWithUserContentController:(id)arg1;
- (void)onLoad:(CDUnknownBlockType)arg1;
- (void)onReady:(CDUnknownBlockType)arg1;
- (void)onUnload:(CDUnknownBlockType)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end

