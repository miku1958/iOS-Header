//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, SKUIFlexibleSegmentedControl;

@protocol SKUIFlexibleSegmentedControlDelegate <NSObject>

@optional
- (void)segmentedControl:(SKUIFlexibleSegmentedControl *)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)segmentedControl:(SKUIFlexibleSegmentedControl *)arg1 showMoreListWithTitles:(NSArray *)arg2;
@end

