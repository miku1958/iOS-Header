//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUFontDescriptor.h>

@interface MPUMutableFontDescriptor : MPUFontDescriptor
{
}

@property (nonatomic) long long leadingAdjustment; // @dynamic leadingAdjustment;
@property (nonatomic) double systemFontSize; // @dynamic systemFontSize;
@property (nonatomic) long long textStyle; // @dynamic textStyle;
@property (nonatomic) BOOL usesItalic; // @dynamic usesItalic;
@property (nonatomic) BOOL wantsMonospaceNumbers; // @dynamic wantsMonospaceNumbers;
@property (nonatomic) long long weight; // @dynamic weight;

- (id)_copyAllowingGlobalCacheLookup:(BOOL)arg1;
- (void)_resetToDefaultValues;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

