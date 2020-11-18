//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSMutableArray;

@interface NSBlockOperation : NSOperation
{
    NSMutableArray *_executionBlocks;
    CDUnknownBlockType _block;
}

@property (readonly, copy) NSArray *executionBlocks;

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)main;

@end

