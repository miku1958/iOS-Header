//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;

@interface SBSwitcherDemoFilteringController : NSObject
{
    NSHashTable *_observers;
    NSArray *_hiddenApplicationBundleIDs;
}

@property (copy, nonatomic) NSArray *hiddenApplicationBundleIDs; // @synthesize hiddenApplicationBundleIDs=_hiddenApplicationBundleIDs;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
