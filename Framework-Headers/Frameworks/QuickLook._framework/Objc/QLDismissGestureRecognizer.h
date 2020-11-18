//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, QLDismissTrackingInformation;

__attribute__((visibility("hidden")))
@interface QLDismissGestureRecognizer : NSObject
{
    NSMutableArray *_actions;
    long long _state;
    QLDismissTrackingInformation *_trackingInformation;
}

@property (nonatomic) long long state; // @synthesize state=_state;
@property (strong) QLDismissTrackingInformation *trackingInformation; // @synthesize trackingInformation=_trackingInformation;

- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;

@end

