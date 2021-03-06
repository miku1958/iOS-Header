//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface MKWalletMerchantStylingInfo : NSObject <NSSecureCoding>
{
    NSData *_styleAttributesData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_featureStyleAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageForSize:(unsigned long long)arg1 scale:(double)arg2;
- (id)imageForSize:(unsigned long long)arg1 scale:(double)arg2 transparent:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyleAttributes:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)tintColorForScale:(double)arg1;

@end

