//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface FMFPlacemark : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_locality;
    NSString *_administrativeArea;
    NSString *_country;
    NSString *_state;
    NSString *_streetAddress;
    NSString *_streetName;
    NSArray *_formattedAddressLines;
}

@property (strong, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property (strong, nonatomic) NSString *country; // @synthesize country=_country;
@property (strong, nonatomic) NSArray *formattedAddressLines; // @synthesize formattedAddressLines=_formattedAddressLines;
@property (strong, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property (strong, nonatomic) NSString *state; // @synthesize state=_state;
@property (strong, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;
@property (strong, nonatomic) NSString *streetName; // @synthesize streetName=_streetName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddress;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocality:(id)arg1 administrativeArea:(id)arg2 country:(id)arg3 state:(id)arg4 streetAddress:(id)arg5 streetName:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end
