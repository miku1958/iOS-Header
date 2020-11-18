//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSDateInterval, NSMutableSet;

@interface HUFaceRecognitionRecentEventsItemProvider : HFItemProvider
{
    NSDateInterval *_dateRange;
    unsigned long long _fetchLimit;
    HMHome *_home;
    NSMutableSet *_personItems;
}

@property (strong, nonatomic) NSDateInterval *dateRange; // @synthesize dateRange=_dateRange;
@property (nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) NSMutableSet *personItems; // @synthesize personItems=_personItems;

+ (id)_coalescedItems:(id)arg1;
+ (CDUnknownBlockType)cameraSignificantEventDateComparator;
+ (BOOL)prefersNonBlockingReloads;
- (void).cxx_destruct;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end
