//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface CKAsyncTransactionGroup : NSObject
{
    NSHashTable *_containerLayers;
}

+ (id)mainTransactionGroup;
+ (void)registerTransactionGroupAsMainRunloopObserver:(id)arg1;
- (void).cxx_destruct;
- (void)addTransactionContainer:(id)arg1;
- (void)commit;
- (id)init;

@end
