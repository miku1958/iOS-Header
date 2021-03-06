//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSURLSessionDataDelegate-Protocol.h>

@class NSMapTable, NSString, NSURL, NSURLSession;

@interface WFSlackSessionManager : NSObject <NSURLSessionDataDelegate>
{
    NSString *_token;
    NSURLSession *_session;
    NSURL *_baseURL;
    NSMapTable *_progressTable;
}

@property (readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMapTable *progressTable; // @synthesize progressTable=_progressTable;
@property (readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *token; // @synthesize token=_token;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)listChannels:(CDUnknownBlockType)arg1;
- (void)listGroups:(CDUnknownBlockType)arg1;
- (void)listIMs:(CDUnknownBlockType)arg1;
- (void)listUsers:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 toChannel:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 progress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)testAuthentication:(CDUnknownBlockType)arg1;
- (void)uploadFile:(id)arg1 progress:(id)arg2 toChannel:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

