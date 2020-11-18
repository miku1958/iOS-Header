//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSGlyphInfo.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>

@interface NSCIDGlyphInfo : NSGlyphInfo <NSSecureCoding>
{
    unsigned short _cid;
    unsigned long long _collection;
}

+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
