//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageLoader.h>

@class NSURLRequest, NSURLSession, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface _UINSURLRequestImageLoader : _UIImageLoader
{
    NSURLRequest *_request;
    NSURLSession *_session;
    NSURLSessionTask *_task;
}

- (void).cxx_destruct;
- (id)_error;
- (BOOL)_really_cancel;
- (void)_really_loadImage:(CDUnknownBlockType)arg1;
- (id)initWithURLRequest:(id)arg1 session:(id)arg2;

@end

