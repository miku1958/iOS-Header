//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTDeviceResourceConsumerDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol AVTUILogger, OS_dispatch_queue;

@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate>
{
    NSMutableArray *_consumers;
    id<AVTUILogger> _logger;
    NSObject<OS_dispatch_queue> *_stateLock;
}

@property (readonly, nonatomic) NSMutableArray *consumers; // @synthesize consumers=_consumers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)consumer:(id)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2;
- (id)initWithLogger:(id)arg1 lockProvider:(CDUnknownBlockType)arg2;
- (void)performWorkWithConsumers:(CDUnknownBlockType)arg1;
- (void)registerConsumer:(id)arg1;
- (void)unregisterConsumer:(id)arg1;

@end

