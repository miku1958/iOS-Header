//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

__attribute__((visibility("hidden")))
@interface TSSStylePropertyChangeSet : TSKSosBase
{
}

- (id)changedPropertyPaths;
- (id)collectUndoForStyle:(id)arg1;
- (id)collectUnset;
- (id)description;
- (void)enumerateDefinedPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (BOOL)isEmptyChangeSet;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToChangeSet:(id)arg1;
- (id)p_variationPropertyMapFromStyle:(id)arg1 withPropertyMap:(id)arg2;
- (id)propertyChangeFilteredByProperties:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setUnsetSpecForProperty:(int)arg1;
- (id)variationPropertyMapFromParentStyle:(id)arg1;
- (id)variationPropertyMapFromStyle:(id)arg1;
- (id)variationStyleFrom:(id)arg1 inStylesheet:(id)arg2;

@end

