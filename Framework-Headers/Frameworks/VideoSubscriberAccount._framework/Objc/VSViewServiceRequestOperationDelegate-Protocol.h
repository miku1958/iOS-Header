//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class UIViewController, VSViewServiceRequestOperation;

@protocol VSViewServiceRequestOperationDelegate <NSObject>
- (void)viewServiceRequestOperation:(VSViewServiceRequestOperation *)arg1 dismissViewController:(UIViewController *)arg2;
- (void)viewServiceRequestOperation:(VSViewServiceRequestOperation *)arg1 presentViewController:(UIViewController *)arg2;
@end
