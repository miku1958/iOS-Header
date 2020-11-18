//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSURLSessionDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PACURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    NSString *_username;
    NSString *_password;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSString *password; // @synthesize password=_password;
@property (readonly) Class superclass;
@property (strong) NSString *username; // @synthesize username=_username;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

@end

