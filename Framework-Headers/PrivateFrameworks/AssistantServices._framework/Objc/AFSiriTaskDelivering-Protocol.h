//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFSiriTask;

@protocol AFSiriTaskDelivering <NSObject>
- (void)deliverSiriTask:(AFSiriTask *)arg1 completionHandler:(void (^)(NSError *))arg2;

@optional
- (void)siriTaskDidFinish;
@end
