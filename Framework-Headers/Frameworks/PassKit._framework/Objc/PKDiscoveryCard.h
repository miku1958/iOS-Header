//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKColor, PKDiscoveryCallToAction, PKDiscoveryMedia;

@interface PKDiscoveryCard : NSObject <NSSecureCoding>
{
    NSString *_headingKey;
    NSString *_titleKey;
    NSString *_inlineDescriptionKey;
    PKDiscoveryMedia *_backgroundMedia;
    PKColor *_backgroundColor;
    PKDiscoveryCallToAction *_callToAction;
    long long _foregroundContentMode;
    NSString *_heading;
    NSString *_title;
    NSString *_inlineDescription;
}

@property (readonly, nonatomic) PKColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) PKDiscoveryMedia *backgroundMedia; // @synthesize backgroundMedia=_backgroundMedia;
@property (readonly, nonatomic) PKDiscoveryCallToAction *callToAction; // @synthesize callToAction=_callToAction;
@property (readonly, nonatomic) long long foregroundContentMode; // @synthesize foregroundContentMode=_foregroundContentMode;
@property (strong, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property (readonly, nonatomic) NSString *headingKey; // @synthesize headingKey=_headingKey;
@property (readonly, nonatomic) NSString *inlineDescription; // @synthesize inlineDescription=_inlineDescription;
@property (readonly, nonatomic) NSString *inlineDescriptionKey; // @synthesize inlineDescriptionKey=_inlineDescriptionKey;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;

@end

