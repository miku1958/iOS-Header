//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARPassiveSensor-Protocol.h>

@class ARDeviceOrientationData, CMMotionManager, NSString;
@protocol ARSensorDelegate;

@interface ARDeviceOrientationSensor : NSObject <ARPassiveSensor>
{
    CMMotionManager *_motionManager;
    ARDeviceOrientationData *_currentOrientationData;
    id<ARSensorDelegate> _delegate;
    long long _worldAlignment;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long worldAlignment; // @synthesize worldAlignment=_worldAlignment;

- (void).cxx_destruct;
- (id)currentData;
- (void)dealloc;
- (id)initWithMotionManager:(id)arg1 alignment:(long long)arg2;
- (unsigned long long)providedDataTypes;
- (void)start;
- (void)stop;

@end

