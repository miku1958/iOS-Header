//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface REBlockSentinel : NSObject
{
    BOOL _completed;
    CDUnknownBlockType _failureBlock;
}

@property (getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property (readonly, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;

- (void).cxx_destruct;
- (void)complete;
- (void)dealloc;
- (id)init;
- (id)initWithFailureBlock:(CDUnknownBlockType)arg1;

@end
