//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CUINamedRenditionInfo : NSObject <NSCopying>
{
    void *_bitmap;
    const struct _renditionkeyfmt *_keyFormat;
}

- (id)archivedData;
- (int)attributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (id)bitwiseAndWith:(id)arg1;
- (void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (BOOL)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2;
- (BOOL)contentPresentForAttribute:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)decrementValue:(long long *)arg1 forAttribute:(int)arg2;
- (id)description;
- (BOOL)diverseContentPresentForAttribute:(int)arg1;
- (unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2;
- (unsigned short)getValueOfAttribute:(int)arg1;
- (void)incrementIndex:(unsigned long long *)arg1 inValues:(id)arg2 forAttribute:(int)arg3;
- (id)initWithData:(id)arg1 andKeyFormat:(const struct _renditionkeyfmt *)arg2;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedRenditionInfo:(id)arg1;
- (unsigned long long)numberOfBitsSet;
- (void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2;

@end

