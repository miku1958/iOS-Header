//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UISEGestureFeatureDelegate;

__attribute__((visibility("hidden")))
@interface _UISEGestureFeature : NSObject
{
    id<_UISEGestureFeatureDelegate> _delegate;
    unsigned long long _state;
}

@property (weak, nonatomic) id<_UISEGestureFeatureDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) unsigned long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (void)_setState:(unsigned long long)arg1;
- (id)debugDictionary;
- (void)incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;

@end

