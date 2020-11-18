//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSOperationQueue, NSURL, SKUIClientContext;

@interface SKUIDonationConfiguration : NSObject
{
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    SKUIClientContext *_clientContext;
    NSURL *_donationPurchaseURL;
    NSURL *_donationValidationURL;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) NSArray *allCharities; // @synthesize allCharities=_charities;
@property (readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, nonatomic) NSURL *donationPurchaseURL; // @synthesize donationPurchaseURL=_donationPurchaseURL;
@property (readonly, nonatomic) NSURL *donationValidationURL; // @synthesize donationValidationURL=_donationValidationURL;

- (void).cxx_destruct;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)charityForIdentifier:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (void)loadConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadLogoForCharity:(id)arg1;
- (id)logoImageForCharity:(id)arg1;
- (void)removeObserver:(id)arg1;

@end

