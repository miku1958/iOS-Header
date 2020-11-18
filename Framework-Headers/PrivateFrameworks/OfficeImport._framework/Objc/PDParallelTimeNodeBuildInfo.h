//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDParallelTimeNodeBuildInfo : NSObject
{
    PDAnimationTarget *mTarget;
    double mDelay;
    double mDuration;
    int mIterateType;
    id mValue;
}

@property double delay; // @synthesize delay=mDelay;
@property double duration; // @synthesize duration=mDuration;
@property int iterateType; // @synthesize iterateType=mIterateType;
@property (strong) PDAnimationTarget *target; // @synthesize target=mTarget;
@property (strong) id value; // @synthesize value=mValue;

- (void).cxx_destruct;

@end
