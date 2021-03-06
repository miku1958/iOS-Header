//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADFill : OADProperties <NSCopying>
{
    BOOL mDefinedByStyle;
    BOOL _definedByStyle;
}

@property BOOL definedByStyle; // @synthesize definedByStyle=_definedByStyle;

- (float)alpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOverridden;
- (void)setStyleColor:(id)arg1;
- (BOOL)usesPlaceholderColor;

@end

