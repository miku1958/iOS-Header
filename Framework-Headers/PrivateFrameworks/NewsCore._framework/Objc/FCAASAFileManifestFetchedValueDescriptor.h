//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;

@interface FCAASAFileManifestFetchedValueDescriptor : FCFetchedValueDescriptor
{
    FCFetchedValueManager *_purchaseIDsManager;
    FCFetchedValueManager *_heldLinksResourceManager;
}

@property (readonly, nonatomic) FCFetchedValueManager *heldLinksResourceManager; // @synthesize heldLinksResourceManager=_heldLinksResourceManager;
@property (readonly, nonatomic) FCFetchedValueManager *purchaseIDsManager; // @synthesize purchaseIDsManager=_purchaseIDsManager;

- (void).cxx_destruct;
- (id)_computedValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithPurchaseIDsManager:(id)arg1 heldLinksResourceManager:(id)arg2;
- (id)inputManagers;
- (BOOL)isValue:(id)arg1 equalToValue:(id)arg2;

@end
