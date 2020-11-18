//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCEReference : NSObject
{
    struct TSCECReference mRef;
    NSString *mOverrideText;
    NSString *mOverrideTextAsTyped;
    unsigned char mStickyBits;
    BOOL mWasConstructedViaNames;
}

- (id).cxx_construct;
- (struct TSCECReference)cReference;
- (void)dealloc;
- (id)initWithCellRef:(const struct TSCECellRef *)arg1;
- (id)initWithRangeRef:(const struct TSCERangeRef *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)overrideText;
- (id)overrideTextAsTyped;
- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(BOOL)arg2;
- (struct TSCERangeRef)rangeRef;
- (id)rangeReference;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5;
- (id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2;
- (void)setOverrideText:(id)arg1;
- (void)setOverrideTextAsTyped:(id)arg1;
- (void)setStickyBits:(unsigned char)arg1;
- (void)setWasConstructedViaNames:(BOOL)arg1;
- (unsigned char)stickyBits;
- (UUIDData_5fbc143e)tableUID;
- (BOOL)wasConstructedViaNames;

@end

