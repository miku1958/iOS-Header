//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityPlatformTranslation/NSCopying-Protocol.h>
#import <AccessibilityPlatformTranslation/NSSecureCoding-Protocol.h>

@class AXPTranslationObject, NSDictionary;

@interface AXPTranslatorRequest : NSObject <NSCopying, NSSecureCoding>
{
    AXPTranslationObject *_translation;
    unsigned long long _requestType;
    unsigned long long _attributeType;
    unsigned long long _actionType;
    NSDictionary *_parameters;
}

@property (nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property (nonatomic) unsigned long long attributeType; // @synthesize attributeType=_attributeType;
@property (strong, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) AXPTranslationObject *translation; // @synthesize translation=_translation;

+ (id)allowedDecodableClasses;
+ (id)requestWithTranslation:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

