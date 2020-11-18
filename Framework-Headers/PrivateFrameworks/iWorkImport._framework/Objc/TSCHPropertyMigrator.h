//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSSPropertySet, TSUIntToIntDictionary, TSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSCHPropertyMigrator : NSObject
{
    TSSPropertySet *mPropertiesToForce;
    TSUIntToIntDictionary *mShouldForceFlags;
    TSUIntegerKeyDictionary *mValuesToForce;
}

- (void).cxx_destruct;
- (id)initWithProperties:(id)arg1;
- (void)migrateToSeries:(id)arg1;
- (void)visitExistingSeries:(id)arg1;

@end

