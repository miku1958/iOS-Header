//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCondition;

__attribute__((visibility("hidden")))
@interface TSUFastReadInvalidatingCache : NSObject
{
    CDUnknownBlockType mGenerator;
    _Atomic id mValue;
    _Atomic long long mReaderCount;
    _Atomic id mToDispose;
    BOOL mReentrant;
    NSCondition *mCondition;
    BOOL mIsGenerating;
}

- (void)dealloc;
- (id)initForReentrant:(BOOL)arg1 withGenerator:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)p_setValue:(id)arg1;
- (id)value;

@end
