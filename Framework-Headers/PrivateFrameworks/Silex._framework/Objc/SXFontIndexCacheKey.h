//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@protocol SXFontAttributes;

@interface SXFontIndexCacheKey : NSObject <NSCopying>
{
    id<SXFontAttributes> _fontAttributes;
    long long _fontSize;
}

@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes; // @synthesize fontAttributes=_fontAttributes;
@property (readonly, nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithFontAttributes:(id)arg1 fontSize:(long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

