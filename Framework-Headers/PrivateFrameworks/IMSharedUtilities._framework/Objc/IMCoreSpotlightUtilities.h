//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMCoreSpotlightUtilities : NSObject
{
}

+ (BOOL)bypassIndexVersionCheck;
+ (id)currentIndexProductVersion;
+ (unsigned long long)currentIndexVersion;
+ (id)descriptionForReindexReason:(unsigned long long)arg1;
+ (id)expectedIndexProductVersion;
+ (unsigned long long)expectedIndexVersion;
+ (unsigned long long)lastIndexedRowID;
+ (unsigned long long)messageIndexBatchSize:(BOOL)arg1;
+ (BOOL)needsDeferredIndexing;
+ (BOOL)needsIndexing;
+ (void)setNeedsDeferredIndexing;

@end

