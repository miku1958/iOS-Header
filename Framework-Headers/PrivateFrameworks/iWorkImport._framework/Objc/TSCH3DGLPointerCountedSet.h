//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DGLPointerCountedSet : NSObject
{
    TSUPointerKeyDictionary *mSet;
    unsigned long long mCount;
    unsigned long long mByteCount;
}

@property (readonly, nonatomic) unsigned long long count; // @synthesize count=mCount;

- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithFrames:(unsigned long long)arg1;
- (id)init;

@end
