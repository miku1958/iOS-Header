//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <ActionKitUI/WFGiphyActionUserInterface-Protocol.h>
#import <ActionKitUI/WFGiphyViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFGiphyActionUIKitUserInterface : WFActionUserInterface <UIAdaptivePresentationControllerDelegate, WFGiphyActionUserInterface, WFGiphyViewControllerDelegate>
{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWithContent:(id)arg1 error:(id)arg2;
- (void)giphyViewController:(id)arg1 didSelectObjects:(id)arg2;
- (void)giphyViewControllerDidCancel:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)showWithQuery:(id)arg1 selectMultiple:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

