//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject
{
    NSString *thingToResolve;
    int resolveType;
    NSObject<OS_dispatch_queue> *resolveQueue;
    NSObject<OS_dispatch_queue> *cacheAccessQueue;
    NSObject<OS_dispatch_queue> *callbackQueue;
    BOOL startedResolving;
}

@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *resolveQueue;
@property (nonatomic) int resolveType; // @synthesize resolveType;
@property BOOL startedResolving; // @synthesize startedResolving;
@property (strong, nonatomic) NSString *thingToResolve; // @synthesize thingToResolve;

- (void)cleanup;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

