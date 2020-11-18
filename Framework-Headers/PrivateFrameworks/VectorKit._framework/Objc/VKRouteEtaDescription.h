//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VKRouteEtaDescription : NSObject
{
    NSString *_etaText;
    unsigned char _glyphType;
    unsigned char _tollCurrencyType;
}

@property (readonly, nonatomic) NSString *etaText; // @synthesize etaText=_etaText;
@property (readonly, nonatomic) unsigned char glyphType; // @synthesize glyphType=_glyphType;
@property (readonly, nonatomic) unsigned char tollCurrencyType; // @synthesize tollCurrencyType=_tollCurrencyType;

- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithEtaText:(id)arg1;
- (id)initWithEtaText:(id)arg1 glyphType:(unsigned char)arg2 tollCurrencyType:(unsigned char)arg3;
- (BOOL)isEqual:(id)arg1;

@end

