//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSURLSessionDataDelegate-Protocol.h>
#import <MapKit/NSURLSessionDelegate-Protocol.h>
#import <MapKit/NSURLSessionTaskDelegate-Protocol.h>

@class NSMapTable, NSString, NSURLSession;

@interface MKMapItemMetadataRequester : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate>
{
    NSURLSession *_session;
    NSMapTable *_requestsForURLs;
    NSMapTable *_tasksForURLs;
    NSMapTable *_dataForTasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancelRequestsForMapItem:(id)arg1;
- (void)dealloc;
- (void)handleTask:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (id)init;
- (void)sendRequest:(id)arg1;

@end

