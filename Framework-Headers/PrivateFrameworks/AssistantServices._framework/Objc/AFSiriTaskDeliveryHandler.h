//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriTaskDelivering-Protocol.h>

@class AFSiriTaskService, NSString;
@protocol AFSiriTaskServiceDelegate, OS_dispatch_queue;

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering>
{
    AFSiriTaskService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    id<AFSiriTaskServiceDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFSiriTaskServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (weak, nonatomic) AFSiriTaskService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)deliverSiriTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

