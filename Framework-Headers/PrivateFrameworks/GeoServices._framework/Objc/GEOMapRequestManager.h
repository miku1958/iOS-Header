//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface GEOMapRequestManager : NSObject
{
    NSMutableSet *_requests;
}

- (void)dealloc;
- (id)init;
- (void)requestComplete:(id)arg1;
- (void)trackRequest:(id)arg1;

@end
