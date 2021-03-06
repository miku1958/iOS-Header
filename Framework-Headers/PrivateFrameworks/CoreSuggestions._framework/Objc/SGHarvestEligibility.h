//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGHarvestEligibility : NSObject
{
}

+ (CDUnknownBlockType)genericItemEligibleBlock;
+ (CDUnknownBlockType)genericItemIneligibleBlock;
+ (CDUnknownBlockType)mailAppItemEligibilityCheckBlock;
+ (CDUnknownBlockType)messagesAppItemEligibilityCheckBlock;
+ (BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)arg1;
+ (BOOL)searchableItemIsEligibleForDissectorPipeline:(id)arg1;
+ (BOOL)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(BOOL *)arg2;
+ (BOOL)searchableItemIsEligibleForHarvestingWithGetterBlock:(CDUnknownBlockType)arg1 bundleIdentifier:(id)arg2 eligibleExceptForAge:(BOOL *)arg3;
+ (BOOL)searchableItemIsStoredEncryptedWithGetterBlock:(CDUnknownBlockType)arg1 bundleIdentifier:(id)arg2;

@end

