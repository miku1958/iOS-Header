//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSRequestPresentationDelegate-Protocol.h>

@class AMSURLSession, NSString, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface AMSBiometricsPresentationProxy : NSObject <AMSRequestPresentationDelegate>
{
    AMSURLSession *_session;
    NSURLSessionTask *_task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;

- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1 task:(id)arg2;

@end
