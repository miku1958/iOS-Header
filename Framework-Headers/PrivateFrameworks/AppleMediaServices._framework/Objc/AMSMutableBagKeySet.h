//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet
{
    NSMutableSet *_mutableKeys;
}

@property (strong, nonatomic) NSMutableSet *mutableKeys; // @synthesize mutableKeys=_mutableKeys;

- (void).cxx_destruct;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)init;
- (id)keys;
- (void)unionBagKeySet:(id)arg1;

@end

