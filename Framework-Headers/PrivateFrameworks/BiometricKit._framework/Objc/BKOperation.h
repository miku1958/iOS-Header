//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDevice;
@protocol BKOperationDelegate, OS_dispatch_queue;

@interface BKOperation : NSObject
{
    BKDevice *_device;
    id<BKOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

@property (weak, nonatomic) id<BKOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BKDevice *device; // @synthesize device=_device;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)startWithError:(id *)arg1;
- (void)startWithReply:(CDUnknownBlockType)arg1;
- (id)userPresentWithError:(id *)arg1;

@end

