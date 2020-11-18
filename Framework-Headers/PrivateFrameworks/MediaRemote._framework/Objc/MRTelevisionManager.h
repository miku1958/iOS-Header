//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRTelevisionManager : NSObject
{
    NSPointerArray *_televisionsPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSArray *allTelevisions;

+ (id)sharedManager;
- (void)clearTelevisions;
- (void)dealloc;
- (id)init;
- (void)registerTelevision:(id)arg1;
- (id)televisionWithName:(id)arg1;

@end
