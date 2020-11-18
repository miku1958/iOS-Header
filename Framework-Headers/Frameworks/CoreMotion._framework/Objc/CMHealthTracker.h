//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject
{
    CMHealthTrackerInternal *_internal;
}

@property (readonly, nonatomic) CMHealthTrackerInternal *_internal; // @synthesize _internal;

+ (long long)isAuthorizedForMetMinutes;
+ (long long)isAuthorizedForVO2MaxData;
+ (BOOL)isMetMinutesAvailable;
+ (BOOL)isVO2MaxDataAvailable;
- (void)dealloc;
- (id)init;
- (void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

