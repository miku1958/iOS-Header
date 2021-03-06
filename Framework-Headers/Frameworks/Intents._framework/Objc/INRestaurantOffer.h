//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantOfferExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRestaurantOffer : NSObject <INRestaurantOfferExport, NSSecureCoding, NSCopying>
{
    NSString *_offerTitleText;
    NSString *_offerDetailText;
    NSString *_offerIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *offerDetailText; // @synthesize offerDetailText=_offerDetailText;
@property (copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property (copy, nonatomic) NSString *offerTitleText; // @synthesize offerTitleText=_offerTitleText;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

