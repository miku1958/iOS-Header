//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDFormulaBuilding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDFormula : NSObject <EDFormulaBuilding>
{
    struct __CFData *mPackedData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)formula;
- (BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (BOOL)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertToIntersect:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1 withFinalParen:(BOOL)arg2;
- (BOOL)convertTokensToSharedAtRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (BOOL)copyTokenAtIndex:(unsigned int)arg1 fromFormula:(id)arg2;
- (BOOL)copyTokenFromXlPtg:(struct XlPtg *)arg1;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (char *)extendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int *)arg3;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg1;
- (BOOL)fixTableOfConstantsRefs;
- (id)init;
- (id)initWithFormula:(id)arg1;
- (BOOL)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (BOOL)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isBaseFormula;
- (BOOL)isCleaned;
- (BOOL)isCleanedWithEvaluationStack;
- (BOOL)isContainsRelativeReferences;
- (BOOL)isSharedFormula;
- (BOOL)isSupportedFormula;
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg1 length:(unsigned int *)arg2;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)arg1 withEDLinks:(id)arg2;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (id)originalFormulaString;
- (void)populateXlPtg:(struct XlPtg *)arg1 index:(unsigned int)arg2;
- (void)removeAllTokens;
- (BOOL)removeTokenAtIndex:(unsigned int)arg1;
- (BOOL)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (BOOL)replaceTokenAtIndex:(unsigned int)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned int)arg3;
- (void)replaceTokenTypeAtIndex:(unsigned int)arg1 withType:(int)arg2;
- (id)saveArgs:(unsigned int)arg1 andDelete:(BOOL)arg2;
- (void)setCleaned:(BOOL)arg1;
- (char *)setExtendedDataAtIndex:(unsigned int)arg1 extendedDataIndex:(unsigned int)arg2 length:(unsigned int)arg3;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)setOriginalFormulaString:(id)arg1;
- (void)setWarning:(int)arg1;
- (void)setWarningParameter:(id)arg1;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (BOOL)setupTokensWithTokensCount:(unsigned int)arg1 tokensWithDataCount:(unsigned int)arg2 extendedDataLength:(unsigned int)arg3 extendedDataCount:(unsigned int)arg4;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (struct EDToken *)tokenAtIndex:(unsigned int)arg1;
- (unsigned int)tokenCount;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;
- (void)updateCleanedWithEvaluationStack:(BOOL)arg1;
- (void)updateContainsRelativeReferences:(BOOL)arg1;
- (BOOL)uppercaseArgAtIndex:(unsigned int)arg1;
- (id)warning;
- (id)warningParameter;
- (int)warningType;
- (BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (ChVector_1f909c3e *)xlPtgs;

@end
