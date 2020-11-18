//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INPerson, INSpeakableString, NSString;

@interface INDeviceDetail : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    INSpeakableString *_deviceName;
    long long _deviceClass;
    INSpeakableString *_productName;
    INSpeakableString *_category;
    INPerson *_deviceOwner;
}

@property (readonly, copy, nonatomic) INSpeakableString *category; // @synthesize category=_category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long deviceClass; // @synthesize deviceClass=_deviceClass;
@property (readonly, copy, nonatomic) INSpeakableString *deviceName; // @synthesize deviceName=_deviceName;
@property (readonly, copy, nonatomic) INPerson *deviceOwner; // @synthesize deviceOwner=_deviceOwner;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) INSpeakableString *productName; // @synthesize productName=_productName;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 deviceName:(id)arg2 deviceClass:(long long)arg3 productName:(id)arg4 category:(id)arg5 deviceOwner:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end
