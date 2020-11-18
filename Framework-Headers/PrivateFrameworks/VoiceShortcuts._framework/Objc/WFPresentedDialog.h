//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WFDialogRequest, WFDialogResponse, WFWorkflowRunningContext;

@interface WFPresentedDialog : NSObject
{
    WFDialogRequest *_request;
    WFDialogResponse *_response;
    unsigned long long _presentationMode;
    WFWorkflowRunningContext *_context;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) WFWorkflowRunningContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property (readonly, nonatomic) WFDialogRequest *request; // @synthesize request=_request;
@property (strong, nonatomic) WFDialogResponse *response; // @synthesize response=_response;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
