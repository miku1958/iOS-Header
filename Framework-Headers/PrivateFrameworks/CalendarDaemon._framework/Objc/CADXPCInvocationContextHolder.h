//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CADXPCInvocationContextHolder : NSObject
{
    NSMutableArray *_retainedArguments;
    id _proxy;
}

@property (readonly, nonatomic) id proxy; // @synthesize proxy=_proxy;

- (void).cxx_destruct;
- (void)clear;
- (void)retainProxy:(id)arg1 andArgumentsInInvocation:(id)arg2;

@end
