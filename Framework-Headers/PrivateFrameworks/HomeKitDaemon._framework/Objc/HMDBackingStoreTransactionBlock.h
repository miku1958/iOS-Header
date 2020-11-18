//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackingStore, HMDBackingStoreTransactionOptions, NSMutableArray, NSString;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging>
{
    BOOL _committed;
    HMDBackingStoreTransactionOptions *_options;
    HMDBackingStore *_backingStore;
    NSMutableArray *_objects;
}

@property (weak, nonatomic) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property (nonatomic) BOOL committed; // @synthesize committed=_committed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property (readonly, nonatomic) HMDBackingStoreTransactionOptions *options; // @synthesize options=_options;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (void)sort:(id)arg1;
- (void).cxx_destruct;
- (void)add:(id)arg1;
- (void)add:(id)arg1 withMessage:(id)arg2;
- (id)debugString:(BOOL)arg1;
- (void)dumpDebug;
- (void)dumpDebug:(id)arg1;
- (id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3;
- (id)logIdentifier;
- (void)run;
- (void)run:(CDUnknownBlockType)arg1;
- (void)runWithoutSave:(CDUnknownBlockType)arg1;
- (void)save;
- (void)save:(CDUnknownBlockType)arg1;

@end

