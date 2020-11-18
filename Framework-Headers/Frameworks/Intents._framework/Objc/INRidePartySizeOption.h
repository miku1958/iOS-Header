//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRidePartySizeOptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INPriceRange, NSString;

@interface INRidePartySizeOption : NSObject <INRidePartySizeOptionExport, NSCopying, NSSecureCoding>
{
    NSString *_sizeDescription;
    INPriceRange *_priceRange;
    struct _NSRange _partySizeRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct _NSRange partySizeRange; // @synthesize partySizeRange=_partySizeRange;
@property (readonly, nonatomic) INPriceRange *priceRange; // @synthesize priceRange=_priceRange;
@property (readonly, nonatomic) NSString *sizeDescription; // @synthesize sizeDescription=_sizeDescription;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPartySizeRange:(struct _NSRange)arg1 sizeDescription:(id)arg2 priceRange:(id)arg3;

@end

