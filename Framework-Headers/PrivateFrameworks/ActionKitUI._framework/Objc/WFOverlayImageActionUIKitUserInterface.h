//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/WFOverlayImageActionUserInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFOverlayImageActionUIKitUserInterface : WFActionUserInterface <WFOverlayImageActionUserInterface>
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
- (void)finishWithFileRepresentations:(id)arg1 error:(id)arg2;
- (void)showWithOverlayImage:(id)arg1 images:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
