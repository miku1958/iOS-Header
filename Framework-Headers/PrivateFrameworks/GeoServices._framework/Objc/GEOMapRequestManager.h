//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapRequestManager : NSObject
{
    NSMutableSet *_requests;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)init;
- (void)requestComplete:(id)arg1;
- (void)trackRequest:(id)arg1;

@end

