//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString, TSCECalculationEngine, TSCERefNamingContext, TSCEWrappedRangeRef;

@protocol TSCERefNamingProtocol <NSObject>
- (NSString *)cellRangeNameFromChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (id)initWithCalcEngine:(TSCECalculationEngine *)arg1;
- (NSString *)nameForBaseRangeRef:(const RefTypeHolder_1140c985 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForChromeColumnIndex:(const struct TSUChromeColumnIndex *)arg1 inTable:(const UUIDData_5fbc143e *)arg2 useSymbolicNames:(BOOL)arg3;
- (NSString *)nameForChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForWrappedRangeRef:(TSCEWrappedRangeRef *)arg1 namingContext:(TSCERefNamingContext *)arg2;
@end

