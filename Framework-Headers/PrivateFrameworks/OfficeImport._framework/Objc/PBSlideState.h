//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBSlideState : NSObject
{
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (void).cxx_destruct;
- (void)addBuild:(id)arg1 order:(unsigned int)arg2;
- (id)buildOrderMap;
- (unsigned int)generateGroupId;
- (id)init;
- (void)reset;

@end
