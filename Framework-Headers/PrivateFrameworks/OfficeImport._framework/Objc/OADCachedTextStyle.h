//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADCachedTextStyle : NSObject
{
    struct OADCachedTextStyleData mData;
    unsigned long long mHash;
}

- (void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2;
- (void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2;
- (unsigned long long)hash;
- (id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end
