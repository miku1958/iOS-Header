//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GQDDrawable;

__attribute__((visibility("hidden")))
@interface GQDWrapPoint : NSObject
{
    struct CGPoint mPoint;
    float mDistance;
    GQDDrawable *mDrawable;
    int mFlowType;
    int mZIndex;
}

- (long long)comparePoint:(id)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4;
- (int)zIndex;

@end

