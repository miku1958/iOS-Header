//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKStatisticsManager : NSObject
{
}

+ (id)sharedStatisticsManager;
- (id)_opacityKeyForIdentifier:(id)arg1;
- (BOOL)_statisticsEnabled;
- (id)_statisticsKeyWithParameters:(id)arg1;
- (id)_thicknessKeyForIdentifier:(id)arg1;
- (double)_valueForIdentifier:(id)arg1;
- (void)didAddStroke:(id)arg1;
- (void)didUseObjectEraser;
- (void)incrementValueForKey:(id)arg1;
- (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;

@end
