//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject
{
    NSArray *_merchantIdentifiers;
    BOOL _ignoreMerchantIdentifiers;
}

@property (readonly, nonatomic) BOOL hasMerchantIdentifiers;
@property (readonly, nonatomic) BOOL ignoreMerchantIdentifiers; // @synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers;

- (void)_probeEntitlementsWithToken:(CDStruct_6ad76789)arg1;
- (void)dealloc;
- (BOOL)hasMerchantIdentifier:(id)arg1;
- (id)initWithToken:(CDStruct_6ad76789)arg1;

@end

