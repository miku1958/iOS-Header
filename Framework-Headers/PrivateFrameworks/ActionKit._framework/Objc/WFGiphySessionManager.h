//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSURLSessionDataDelegate-Protocol.h>

@class NSString, NSURL, NSURLSession;

@interface WFGiphySessionManager : NSObject <NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    NSString *_apiKey;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property (readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)random:(CDUnknownBlockType)arg1;
- (void)search:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendRequestWithPath:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)trendingWithLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

