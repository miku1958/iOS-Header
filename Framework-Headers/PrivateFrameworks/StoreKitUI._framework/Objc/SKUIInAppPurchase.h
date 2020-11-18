//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SKUIInAppPurchase : NSObject <SKUICacheCoding>
{
    NSString *_formattedPrice;
    NSString *_name;
}

@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedPrice; // @synthesize formattedPrice=_formattedPrice;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithInAppPurchaseDictionary:(id)arg1;

@end

