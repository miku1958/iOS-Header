//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCHPropertyMutationHelper : NSObject
{
}

+ (void)applyMutations:(id)arg1 forImport:(BOOL)arg2 forStyleOwner:(id)arg3 withNonStylePropertyList:(id)arg4 toStylePropertyMap:(id)arg5 andNonStylePropertyMap:(id)arg6;
+ (id)convertToStyleSwapTuplesForStyleOwner:(id)arg1 styleSwapType:(int)arg2 nonStyleSwapType:(int)arg3 index:(unsigned long long)arg4 fromMutations:(id)arg5 forImport:(BOOL)arg6 withOptionalStyleValueConversionBlock:(CDUnknownBlockType)arg7;
+ (int)safe_specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(BOOL)arg3;
+ (void)setValue:(id)arg1 forProperty:(int)arg2 ofStyleOwner:(id)arg3;
+ (int)specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(BOOL)arg3;
+ (id)styleSwapTuplesFromMutationTuples:(id)arg1 forImport:(BOOL)arg2;
- (id)init;

@end
