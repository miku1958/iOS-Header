//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MultipeerConnectivity/NSURLSessionDataDelegate-Protocol.h>
#import <MultipeerConnectivity/NSURLSessionDelegate-Protocol.h>

@class MCPeerID, MCSession, NSString, NSURLSession, NSURLSessionDataTask;

@interface MCResourceDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_urlTask;
    CDUnknownBlockType _urlResponseHandler;
    MCSession *_session;
    NSString *_resourceName;
    MCPeerID *_peerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
@property (copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property (nonatomic) MCSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property (nonatomic) CDUnknownBlockType urlResponseHandler; // @synthesize urlResponseHandler=_urlResponseHandler;
@property (strong, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property (strong, nonatomic) NSURLSessionDataTask *urlTask; // @synthesize urlTask=_urlTask;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1 resourceUrl:(id)arg2 name:(id)arg3 peerID:(id)arg4;
- (void)sendData:(id)arg1 fromByteOffset:(unsigned long long)arg2;
- (void)syncCloseStreamForSession:(id)arg1 withError:(id)arg2;

@end

