//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AuthChallengeDelegate : NSObject <NSURLSessionTaskDelegate>
{
    BOOL _didReceiveChallenge;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)didReceiveChallenge;

@end

