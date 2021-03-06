//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/SFSafariViewControllerDelegate-Protocol.h>
#import <ActionKitUI/WFShowWebPageActionUserInterface-Protocol.h>
#import <ActionKitUI/WFWebViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFShowWebPageActionUIKitUserInterface : WFActionUserInterface <WFWebViewControllerDelegate, SFSafariViewControllerDelegate, WFShowWebPageActionUserInterface>
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
- (void)finishWithError:(id)arg1;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)showRichText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showURL:(id)arg1 readerView:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)webViewControllerDidFinish:(id)arg1;

@end

