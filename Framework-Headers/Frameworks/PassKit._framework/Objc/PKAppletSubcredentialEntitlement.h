//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAppletSubcredentialEntitlement : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _nativelySupported;
    unsigned long long _value;
    NSString *_descriptionKey;
    NSString *_longDescriptionKey;
}

@property (copy, nonatomic) NSString *descriptionKey; // @synthesize descriptionKey=_descriptionKey;
@property (copy, nonatomic) NSString *longDescriptionKey; // @synthesize longDescriptionKey=_longDescriptionKey;
@property (nonatomic, getter=isNativelySupported) BOOL nativelySupported; // @synthesize nativelySupported=_nativelySupported;
@property (nonatomic) unsigned long long value; // @synthesize value=_value;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultDescription;
- (id)defaultLongDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)localizedDescriptionWithPass:(id)arg1;
- (id)localizedLongDescriptionWithPass:(id)arg1;

@end

