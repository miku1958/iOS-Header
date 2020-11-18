//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMOdometerProxy;
@protocol CMOdometerDelegate;

@interface CMOdometer : NSObject
{
    id<CMOdometerDelegate> _delegate;
    CMOdometerProxy *_odometerProxy;
}

@property (nonatomic) id<CMOdometerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) CMOdometerProxy *odometerProxy; // @synthesize odometerProxy=_odometerProxy;

- (void)dealloc;
- (id)init;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopOdometerUpdates;

@end
