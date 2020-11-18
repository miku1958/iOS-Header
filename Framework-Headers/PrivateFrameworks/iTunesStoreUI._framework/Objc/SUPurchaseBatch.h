//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SUPurchaseManager;

@interface SUPurchaseBatch : NSObject
{
    NSArray *_continuations;
    NSArray *_errors;
    NSArray *_items;
    NSArray *_offers;
    SUPurchaseManager *_purchaseManager;
    BOOL _shouldSuspendWhenFinished;
    NSArray *_validPurchases;
}

@property (strong, nonatomic) NSArray *continuations; // @synthesize continuations=_continuations;
@property (strong, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager; // @synthesize purchaseManager=_purchaseManager;
@property (strong, nonatomic) NSArray *validPurchases; // @synthesize validPurchases=_validPurchases;

- (id)_copyModifiedErrorsFromDictionary:(struct __CFDictionary *)arg1;
- (id)_copyUniqueErrorsFromErrors:(id)arg1;
- (id)_copyValidPurchasesForItems:(id)arg1;
- (void)_validateItems;
- (id)copyContinuationsForPurchases:(id)arg1;
- (id)copyFilteredItemsFromItems:(id)arg1;
- (void)dealloc;
- (CDUnknownFunctionPointerType)errorEqualCallback;
- (id)everythingFailedErrorForError:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 offers:(id)arg2;
- (id)mergedErrorForError:(id)arg1 withCount:(long long)arg2;
- (void)setDocumentTargetIdentifier:(id)arg1;
- (void)setPurchasesAndContinuationsFromPurchases:(id)arg1;

@end

