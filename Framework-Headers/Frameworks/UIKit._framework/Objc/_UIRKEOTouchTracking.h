//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIRKEOTouchTracking : NSObject
{
    BOOL _valid;
    long long _type;
    double _largestObservedRadius;
    Class _beganGestureClass;
}

@property (strong, nonatomic) Class beganGestureClass; // @synthesize beganGestureClass=_beganGestureClass;
@property (nonatomic) double largestObservedRadius; // @synthesize largestObservedRadius=_largestObservedRadius;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) BOOL valid; // @synthesize valid=_valid;

- (void).cxx_destruct;

@end

