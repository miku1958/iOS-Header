//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface PKServiceProviderPurchaseData : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionaryRepresentation;
}

@property (copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPKServiceProviderPurchaseData:(id)arg1;

@end

