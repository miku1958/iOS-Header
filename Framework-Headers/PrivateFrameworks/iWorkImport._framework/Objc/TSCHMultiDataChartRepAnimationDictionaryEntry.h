//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TSCHMultiDataLayerAnimationInfo;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject
{
    TSCHMultiDataLayerAnimationInfo *mAnimationInfo;
    NSMutableArray *mAnimations;
}

+ (id)entry;
- (void)addAnimation:(id)arg1 animationInfo:(id)arg2;
- (id)animation;
- (void)dealloc;
- (id)init;

@end

