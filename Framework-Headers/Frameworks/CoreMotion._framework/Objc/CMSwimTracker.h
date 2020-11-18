//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMSwimTrackerInternal;

@interface CMSwimTracker : NSObject
{
    CMSwimTrackerInternal *_internal;
}

@property (readonly, nonatomic) CMSwimTrackerInternal *_internal; // @synthesize _internal;

+ (BOOL)isAvailable;
+ (unsigned long long)maxSwimDataEntries;
- (void)dealloc;
- (id)init;
- (void)querySwimUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startUpdatesFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopUpdates;

@end
