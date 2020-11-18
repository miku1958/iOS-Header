//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKPassesDataSource-Protocol.h>

@class NSArray, NSHashTable, NSString;

@interface NPKExpressPassesManager : NSObject <NPKPassesDataSource>
{
    NSHashTable *_observers;
    NSArray *_currentPasses;
    NSArray *_currentPaymentPasses;
}

@property (strong, nonatomic) NSArray *currentPasses; // @synthesize currentPasses=_currentPasses;
@property (strong, nonatomic) NSArray *currentPaymentPasses; // @synthesize currentPaymentPasses=_currentPaymentPasses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enableRemoteUpdates;
- (id)init;
- (void)movePassAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)passForUniqueID:(id)arg1;
- (id)passes;
- (id)paymentPasses;
- (void)registerObserver:(id)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removePass:(id)arg1;
- (void)setDefaultPaymentPass:(id)arg1;
- (BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)suppressRemoteUpdates;
- (void)unregisterObserver:(id)arg1;
- (void)updateWithExpressPass:(id)arg1 siblingExpressPasses:(id)arg2;

@end
