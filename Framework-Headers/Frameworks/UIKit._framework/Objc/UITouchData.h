//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface UITouchData : NSObject
{
    struct CGPoint startTouchDownLocation;
    unsigned long long lastTapCount;
    double lastTouchUpTimestamp;
    double lastTouchDownTimestamp;
    BOOL touchIsValidTap;
    UITouch *lastTouch;
}

@end

