//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/WFDictateTextActionUserInterface-Protocol.h>
#import <ActionKitUI/WFDictateTextActionViewDelegate-Protocol.h>

@class NSString, WFDictateTextActionView;

__attribute__((visibility("hidden")))
@interface WFDictateTextActionUIKitUserInterface : WFActionUserInterface <WFDictateTextActionViewDelegate, WFDictateTextActionUserInterface>
{
    WFDictateTextActionView *_actionView;
    CDUnknownBlockType _completionHandler;
}

@property (strong, nonatomic) WFDictateTextActionView *actionView; // @synthesize actionView=_actionView;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionDidBeginListening;
- (void)actionDidReceiveTranscription:(id)arg1;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dictateTextActionViewDidTapStopButton:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
