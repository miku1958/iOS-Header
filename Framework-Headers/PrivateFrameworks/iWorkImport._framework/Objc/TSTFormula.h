//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString, TSCECalculationEngine, TSTExpressionNode, TSTInfo;

__attribute__((visibility("hidden")))
@interface TSTFormula : NSObject <NSCopying>
{
    TSTExpressionNode *_expressionTree;
    TSCECalculationEngine *_calculationEngine;
    TSTInfo *_hostInfo;
    NSString *_initialWhitespace;
    struct TSUCellCoord _hostCell;
    BOOL _syntaxError;
    BOOL _fixupFormulas;
    BOOL _formulaWasFixable;
    BOOL _formulaFixupsShouldStick;
    BOOL _empty;
}

@property (nonatomic) TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=_calculationEngine;
@property (nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property (strong, nonatomic) TSTExpressionNode *expressionTree; // @synthesize expressionTree=_expressionTree;
@property (nonatomic) BOOL fixupFormulas; // @synthesize fixupFormulas=_fixupFormulas;
@property (readonly, nonatomic) struct TSCEFormula formula;
@property (readonly, nonatomic) BOOL formulaFixupsShouldStick; // @synthesize formulaFixupsShouldStick=_formulaFixupsShouldStick;
@property (readonly, nonatomic) BOOL formulaWasFixable; // @synthesize formulaWasFixable=_formulaWasFixable;
@property (readonly, nonatomic) struct TSCEFormula geometricFormula;
@property (copy, nonatomic) NSString *initialWhitespace; // @synthesize initialWhitespace=_initialWhitespace;
@property (nonatomic, getter=isSyntaxError) BOOL syntaxError; // @synthesize syntaxError=_syntaxError;

+ (id)doubleQuoteCharacters;
+ (id)equalsCharacters;
+ (id)formulaForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 inTable:(id)arg3;
+ (int)formulaQuoteContextAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2;
+ (id)leadingSingleQuoteEscapeCharacters;
+ (id)leftParenCharacters;
+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 unmatchedParenCount:(unsigned long long)arg2 quoteContext:(int)arg3 inStorage:(id)arg4;
+ (int)quoteContextAtCharIndex:(unsigned long long)arg1 previousContext:(int)arg2 inStorage:(id)arg3;
+ (id)rightParenCharacters;
+ (id)singleQuoteCharacters;
- (void).cxx_destruct;
- (BOOL)canSimplify;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)formulaDetokenizedText;
- (id)formulaPlainText;
- (BOOL)hasBareArgumentPlaceholders;
- (id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 hostCell:(struct TSUCellCoord)arg3 hostTable:(id)arg4;
- (id)initWithCalculationEngine:(id)arg1 hostCell:(struct TSUCellCoord)arg2 hostTable:(id)arg3;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(struct TSUCellCoord)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerUID:(const UUIDData_5fbc143e *)arg5;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(struct TSUCellCoord)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerUID:(const UUIDData_5fbc143e *)arg5 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg6;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)p_fixFormula:(id)arg1;
- (id)p_formulaAsTextReturningTokenValues:(BOOL)arg1;
- (void)reparseWithStorage:(id)arg1;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(CDUnknownBlockType)arg2;
- (void)reset;
- (id)simplify;

@end

