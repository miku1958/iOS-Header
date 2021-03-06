//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, RMConnectionClient;
@protocol OS_dispatch_queue;

@interface RMAudioListenerPoseManager : NSObject
{
    BOOL _isReceivingRelatveData;
    NSDictionary *_tempestOptions;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _relativeDataCallback;
    RMConnectionClient *_connectionClient;
}

@property (strong, nonatomic) NSDictionary *tempestOptions; // @synthesize tempestOptions=_tempestOptions;

- (void).cxx_destruct;
- (void)_startReceivingAudioListenerPoseUpdatesInternal:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)startReceivingAudioListenerPoseUpdates:(CDUnknownBlockType)arg1;
- (void)stopReceivingAudioListenerPoseUpdates;

@end

