//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTMapItem.h>

#import <coreroutine/RTCoreDataReadable-Protocol.h>
#import <coreroutine/RTCoreDataWritable-Protocol.h>

@class NSString;

@interface RTMapItem (RTExtensions) <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createWithLearnedLocationOfInterestMO:(id)arg1;
+ (id)createWithLearnedPlaceMO:(id)arg1;
+ (id)createWithManagedObject:(id)arg1;
+ (id)createWithMapItemMO:(id)arg1;
+ (id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id *)arg4;
- (id)appendSource:(unsigned long long)arg1;
- (id)managedObjectWithContext:(id)arg1;
- (id)mergeWithMapItem:(id)arg1 preservingProperties:(id)arg2;
- (id)removeSource:(unsigned long long)arg1;
@end
