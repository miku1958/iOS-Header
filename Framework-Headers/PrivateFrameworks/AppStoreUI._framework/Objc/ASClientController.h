//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUClientController.h>

@interface ASClientController : SUClientController
{
    BOOL _shouldExitAfterPurchases;
}

@property (nonatomic) BOOL shouldExitAfterPurchases; // @synthesize shouldExitAfterPurchases=_shouldExitAfterPurchases;

- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;

@end

