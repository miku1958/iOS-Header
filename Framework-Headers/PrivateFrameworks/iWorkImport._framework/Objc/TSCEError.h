//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSCEError : NSObject <NSCopying>
{
    NSDictionary *mErrorDictionary;
}

+ (id)abortError;
+ (id)attachmentError;
+ (id)autoNumberAttachmentError;
+ (id)badReferenceError;
+ (id)circularReferenceError;
+ (id)durationNotAllowedError:(id)arg1 argumentNumber:(int)arg2;
+ (id)errorForToken:(id)arg1;
+ (id)errorWithDictionary:(id)arg1;
+ (BOOL)exceptionIsCircularReferenceError:(id)arg1;
+ (BOOL)exceptionIsFromCalcEngine:(id)arg1;
+ (BOOL)exceptionIsInvalidMergeReference:(id)arg1;
+ (BOOL)exceptionIsRangeUsageError:(id)arg1;
+ (id)indirectErrorForRangeReference:(struct TSCERangeRef)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 calculationEngine:(id)arg3;
+ (id)invalidCurrencyPairError;
+ (id)invalidHistoricalCurrencyAttributeError;
+ (id)invalidHistoricalDateError;
+ (id)invalidHistoricalStockAttributeError;
+ (id)invalidLiveCurrencyAttributeError;
+ (id)invalidLiveStockAttributeError;
+ (id)invalidMergeReference:(struct TSCERangeRef)arg1 contextEntityUID:(const UUIDData_5fbc143e *)arg2;
+ (id)invalidStockCodeError:(id)arg1;
+ (id)noTradingInformationErrorWithNextAvailableDate:(id)arg1;
+ (id)notReadyError;
+ (BOOL)p_DictionaryRepresentsInvalidMergeReference:(id)arg1;
+ (void)p_RaiseErrorForDictionary:(id)arg1;
+ (void)raiseAbortError;
+ (void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseArgumentSetUsedOutOfContextError;
+ (void)raiseArrayElementNoDataError;
+ (void)raiseAttachmentErrorInTextCell:(BOOL)arg1;
+ (void)raiseAutoNumberAttachmentErrorInTextCell:(BOOL)arg1;
+ (void)raiseCategoryCellReferenceError;
+ (void)raiseCharInputOutOfBoundsError;
+ (void)raiseCircularReferenceErrorWithReference:(id)arg1;
+ (void)raiseComparisonTypeExceptionForLeftType:(int)arg1 rightType:(int)arg2;
+ (void)raiseConvertOriginUnitMismatchError;
+ (void)raiseCurrencyNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseDataInvalidDimensionsError;
+ (void)raiseDataInvalidLengthError;
+ (void)raiseDataInvalidWidthError;
+ (void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentDimensionsErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)arg1;
+ (void)raiseDisallowedStockModeError:(id)arg1;
+ (void)raiseDivideByZeroError;
+ (void)raiseDurationDisallowedForNormdistPDFError;
+ (void)raiseDurationNotAllowedError:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseEmptyArgumentError;
+ (void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)arg1;
+ (void)raiseEmptyArrayError;
+ (void)raiseErrorForError:(id)arg1;
+ (void)raiseErrorForInvalidReference;
+ (void)raiseErrorForInvalidReference:(struct TSCERangeRef)arg1 orString:(id)arg2 contextEntityUID:(const UUIDData_5fbc143e *)arg3;
+ (void)raiseErrorForInvalidReference:(struct TSCERangeRef)arg1 orString:(id)arg2 contextEntityUID:(const UUIDData_5fbc143e *)arg3 invalidMergeReference:(BOOL)arg4 disqualifiedFromEndCell:(BOOL)arg5;
+ (void)raiseIndirectErrorForRangeReference:(struct TSCERangeRef)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 calculationEngine:(id)arg3;
+ (void)raiseInvalidAltitudeError;
+ (void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3;
+ (void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)arg1 hasInitialUnrelatedArgument:(BOOL)arg2;
+ (void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 argsAscending:(BOOL)arg4 equalityPermitted:(BOOL)arg5;
+ (void)raiseInvalidArgumentsErrorForFunctionName:(id)arg1 argumentIndex:(int)arg2;
+ (void)raiseInvalidArrayContentsError;
+ (void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)arg1 base:(short)arg2;
+ (void)raiseInvalidComparisonError;
+ (void)raiseInvalidCurrencyComparisonError;
+ (void)raiseInvalidDateError;
+ (void)raiseInvalidDateManipulationError;
+ (void)raiseInvalidFrequencyErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidHeadingError;
+ (void)raiseInvalidHistoricalCurrencyAttributeError;
+ (void)raiseInvalidHistoricalDateError;
+ (void)raiseInvalidHistoricalStockAttributeError;
+ (void)raiseInvalidHyperlinkError;
+ (void)raiseInvalidIndexForChooseError:(int)arg1;
+ (void)raiseInvalidIntersectionError:(vector_99ef3555)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 calcEngine:(id)arg3;
+ (void)raiseInvalidLatitudeLongitudeError;
+ (void)raiseInvalidLiveCurrencyAttributeError;
+ (void)raiseInvalidLiveStockAttributeError;
+ (void)raiseInvalidMatchModeError;
+ (void)raiseInvalidProbabilityErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidRangeUsageErrorForReference:(struct TSCERangeRef)arg1;
+ (void)raiseInvalidSubtotalFunctionNumberError;
+ (void)raiseInvalidTailErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidTimeError;
+ (void)raiseInvalidTokenInFormulaError;
+ (void)raiseInvalidTypeErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidUnitStringError:(id)arg1;
+ (void)raiseLinestHighlyCorrelatedVariableError;
+ (void)raiseLinestMatrixUnderdeterminedError;
+ (void)raiseLocationHeadingFailureError;
+ (void)raiseLocationHeadingUnknownError;
+ (void)raiseLocationNetworkError;
+ (void)raiseLocationServicesNotEnabledError;
+ (void)raiseLocationUnknownError;
+ (void)raiseLocationUserDeniedError;
+ (void)raiseMatchNotFoundErrorForValue:(id)arg1 functionName:(id)arg2;
+ (void)raiseMismatchedCurrenciesErrorForFunctionName:(id)arg1;
+ (void)raiseMismatchedMaxUnitsError;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 argumentNumberString:(id)arg2;
+ (void)raiseMixedTypeManipulationErrorForFunctionName:(id)arg1;
+ (void)raiseMultipleDurationsErrorForFunctionName:(id)arg1;
+ (void)raiseNegativeReceivedAmountError;
+ (void)raiseNegativeVectorValueErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseNoModeError;
+ (void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)arg1 requiredType:(int)arg2;
+ (void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)arg1;
+ (void)raiseNonMetricUnitPrefixErrorForUnitString:(id)arg1;
+ (void)raiseNotAReferenceErrorForFunctionName:(id)arg1;
+ (void)raiseNotAVectorError;
+ (void)raiseNotEnoughInputsErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 required:(int)arg3;
+ (void)raiseNotReadyError;
+ (void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)arg1;
+ (void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)arg1;
+ (void)raiseNumberError;
+ (void)raiseNumberErrorForFunctionName:(id)arg1;
+ (void)raiseNumberMinusDateError;
+ (void)raiseNumberSmallerThanZeroError;
+ (void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)arg1;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(BOOL)arg4;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(BOOL)arg4 upperBound:(double)arg5 upperBoundInclusive:(BOOL)arg6;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 upperBound:(double)arg3 upperBoundInclusive:(BOOL)arg4;
+ (void)raisePercentRankExcInputOutOfRangeError;
+ (void)raisePercentRankInputOutOfRangeError;
+ (void)raisePositionLargerThanArrayErrorForFunctionName:(id)arg1;
+ (void)raiseRangeDoesNotSumToOneForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseRangeSizeMismatchErrorForFunctionName:(id)arg1;
+ (void)raiseReferenceToEmptyCellErrorForFunctionName:(id)arg1 rangeReference:(struct TSCERangeRef)arg2;
+ (void)raiseRemoteDataUnavailableErrorWithAttribute:(id)arg1;
+ (void)raiseSignsMustMatchErrorForFunctionName:(id)arg1;
+ (void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)arg1;
+ (void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)arg1 string:(id)arg2;
+ (void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)arg1 string:(id)arg2;
+ (void)raiseStringTooLongError;
+ (void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1;
+ (void)raiseTooFewDataPointsErrorForFunctionName:(id)arg1;
+ (void)raiseTypeExceptionForValue:(struct TSCEValue)arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 locale:(id)arg4;
+ (void)raiseUnionInsideIntersectionError;
+ (void)raiseUnitsNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseUnkownFunctionErrorForString:(id)arg1;
+ (void)raiseUnsupportedFunctionError;
+ (void)raiseUnsupportedR1C1StyleError;
+ (void)raiseValueErrorForFunctionName:(id)arg1;
+ (void)raiseValueNotAvailableErrorForFunctionName:(id)arg1;
+ (void)raiseVectorValueNotNumberErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)arg1 provided:(int)arg2;
+ (void)raiseZeroToPowerOfZeroError;
+ (id)referenceToNonexistentTableError:(const UUIDData_5fbc143e *)arg1;
+ (id)remoteDataServerError;
+ (id)remoteDataUnavailableErrorWithAttribute:(id)arg1;
+ (id)syntaxError;
- (id)bakedString;
- (BOOL)boolean;
- (BOOL)booleanForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)date;
- (id)dateForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (id)dateValue;
- (void)dealloc;
- (int)deepType;
- (id)displayStringWithCalculationEngine:(id)arg1 forTable:(const UUIDData_5fbc143e *)arg2 andCellID:(struct TSUCellCoord)arg3;
- (double)doubleValue;
- (id)error;
- (id)errorDictionary;
- (BOOL)errorIsRangeUsageError;
- (struct TSCEVector)formattedVectorForFunction:(id)arg1 argumentIndex:(int)arg2 context:(struct TSCEEvaluationContext *)arg3 format:(const struct TSCEFormat *)arg4;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isAbortedError;
- (BOOL)isCircularReferenceError;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isErrorReferenceError;
- (BOOL)isFromCalcEngine;
- (BOOL)isInvalidMergeReference;
- (BOOL)isInvalidReference;
- (BOOL)isNativelyEqual:(struct TSCEValue)arg1;
- (BOOL)isNotReadyError;
- (BOOL)isOfType:(id)arg1;
- (BOOL)isSyntaxError;
- (BOOL)isUnsupportedFunctionError;
- (int)nativeType;
- (struct TSCENumberValue *)number;
- (struct TSCENumberValue *)numberForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 andDescend:(BOOL)arg3;
- (void)raiseException;
- (struct TSCERangeRef)rangeRef;
- (struct TSCEReferenceValue *)referenceValue;
- (struct TSCEReferenceValue *)referenceValueForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (void)setErrorDictionary:(id)arg1;
- (id)string;
- (id)stringForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (id)stringValue;
- (id)tokenString;
- (struct TSCEVector *)vector;

@end

