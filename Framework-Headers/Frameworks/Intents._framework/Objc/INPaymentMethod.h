//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INPaymentMethodExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSString;

@interface INPaymentMethod : NSObject <INCacheableContainer, INPaymentMethodExport, NSCopying, NSSecureCoding>
{
    long long _type;
    NSString *_name;
    NSString *_identificationHint;
    INImage *_icon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) INImage *icon; // @synthesize icon=_icon;
@property (readonly, copy, nonatomic) NSString *identificationHint; // @synthesize identificationHint=_identificationHint;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) INImage *image;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)applePayPaymentMethod;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)cacheableObjects;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 image:(id)arg3;
- (id)initWithType:(long long)arg1 name:(id)arg2 identificationHint:(id)arg3 icon:(id)arg4;

@end

