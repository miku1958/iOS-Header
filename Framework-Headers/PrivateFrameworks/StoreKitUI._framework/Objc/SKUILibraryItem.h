//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSNumber, NSString, SKUIStoreIdentifier;

@interface SKUILibraryItem : NSObject <NSCopying>
{
    SKUIStoreIdentifier *_storeIdentifier;
    NSString *_storeFlavorIdentifier;
}

@property (copy, nonatomic) NSString *storeFlavorIdentifier; // @synthesize storeFlavorIdentifier=_storeFlavorIdentifier;
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (readonly, nonatomic) NSNumber *storeItemIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

