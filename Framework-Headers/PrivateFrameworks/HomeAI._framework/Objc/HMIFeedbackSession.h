//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSURLSessionDelegate-Protocol.h>

@class HMIHomeKitClient, NSOperationQueue, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface HMIFeedbackSession : HMFObject <NSURLSessionDelegate, HMFLogging>
{
    HMIHomeKitClient *_homeKitClient;
    NSOperationQueue *_operationQueue;
    NSURLSession *_session;
    NSString *_feedbackServiceHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *feedbackServiceHost; // @synthesize feedbackServiceHost=_feedbackServiceHost;
@property (readonly) unsigned long long hash;
@property (readonly) HMIHomeKitClient *homeKitClient; // @synthesize homeKitClient=_homeKitClient;
@property (readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)init;

@end
