//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (XPCObject)
- (BOOL)_caseInsensitiveHasMatchInEnumeration:(id)arg1;
- (id)_cs_initWithXPCObject:(id)arg1;
- (id)_cs_xpcObject;
- (id)_firstMatchesForRegularExpression:(id)arg1;
- (id)_firstMatchesForRegularExpressions:(id)arg1;
- (BOOL)_hasSubstring:(id)arg1;
- (BOOL)_matchesRegularExpression:(id)arg1;
- (id)_stringByFixingNamePattern:(id)arg1;
- (id)_stringByStrippingLeadingNoise:(id)arg1;
- (id)_stringByStrippingNoiseLeadingNoise:(id)arg1 TrailingNoise:(id)arg2;
- (id)_stringByStrippingTrailingNoise:(id)arg1;
- (id)shortFormForUUID;
@end
