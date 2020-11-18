//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDDataCollectionObserverState : NSObject <NSCopying>
{
    BOOL _isInBackground;
    BOOL _hasRunningWorkout;
}

@property (readonly, nonatomic) BOOL hasRunningWorkout; // @synthesize hasRunningWorkout=_hasRunningWorkout;
@property (readonly, nonatomic) BOOL isInBackground; // @synthesize isInBackground=_isInBackground;

+ (id)dataCollectionObserverStateInBackground:(BOOL)arg1 hasRunningWorkout:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
