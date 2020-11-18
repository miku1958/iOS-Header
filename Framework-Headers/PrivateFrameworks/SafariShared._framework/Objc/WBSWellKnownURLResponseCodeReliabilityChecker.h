//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURL, NSURLSession;

@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject
{
    NSURL *_url;
    NSOperationQueue *_fetchOperationQueue;
    NSURLSession *_session;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)checkReliabilityWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end
