//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCDeviceComponent-Protocol.h>

@protocol _GCMotionEventSourceDescription;

@protocol _GCDeviceMotionComponent <_GCDeviceComponent>

@property (copy, nonatomic) CDUnknownBlockType deviceMotionServiceConnectedHandler;
@property (readonly, nonatomic) id<_GCMotionEventSourceDescription> motionEventSource;
@property (nonatomic) BOOL sensorsActive;

@end

