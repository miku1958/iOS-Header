//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTDeviceResourceConsumer-Protocol.h>

@class AVTView, NSString, NSTimer;
@protocol AVTDeviceResourceConsumerDelegate, AVTUILogger;

@interface AVTViewThrottler : NSObject <AVTDeviceResourceConsumer>
{
    BOOL _throttling;
    id<AVTDeviceResourceConsumerDelegate> _consumerDelegate;
    AVTView *_avtView;
    id<AVTUILogger> _logger;
    NSTimer *_autoUnthrottlingTimer;
}

@property (strong, nonatomic) NSTimer *autoUnthrottlingTimer; // @synthesize autoUnthrottlingTimer=_autoUnthrottlingTimer;
@property (readonly, nonatomic) AVTView *avtView; // @synthesize avtView=_avtView;
@property (weak, nonatomic) id<AVTDeviceResourceConsumerDelegate> consumerDelegate; // @synthesize consumerDelegate=_consumerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (readonly) Class superclass;
@property (nonatomic) BOOL throttling; // @synthesize throttling=_throttling;

- (void).cxx_destruct;
- (void)applyThrottling;
- (void)autoUnthrottle;
- (void)cancelAutoUnthrottling;
- (void)dealloc;
- (id)initWithAVTView:(id)arg1 environment:(id)arg2;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (void)scheduleAutoUnthrottlingAfterDelay:(double)arg1;
- (void)throttle;
- (void)throttleForDelay:(double)arg1;
- (void)unthrottle;

@end
