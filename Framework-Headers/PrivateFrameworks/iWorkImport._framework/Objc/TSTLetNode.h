//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTLetNode : TSTExpressionNode
{
    NSString *_whitespaceAfterLet;
    NSString *_whitespaceAfterIdentifier;
    NSString *_whitespaceAfterEquals;
    NSString *_whitespaceAfterDelimiter;
}

@property (strong, nonatomic) NSString *whitespaceAfterDelimiter; // @synthesize whitespaceAfterDelimiter=_whitespaceAfterDelimiter;
@property (strong, nonatomic) NSString *whitespaceAfterEquals; // @synthesize whitespaceAfterEquals=_whitespaceAfterEquals;
@property (strong, nonatomic) NSString *whitespaceAfterIdentifier; // @synthesize whitespaceAfterIdentifier=_whitespaceAfterIdentifier;
@property (strong, nonatomic) NSString *whitespaceAfterLet; // @synthesize whitespaceAfterLet=_whitespaceAfterLet;

+ (id)defaultNameWithIndex:(unsigned int)arg1;
+ (id)letString;
+ (id)newBareLetNodeWithContext:(id)arg1;
- (void).cxx_destruct;
- (void)addAllIdentifiersToSymbolTable:(struct TSCESymbolTable *)arg1;
- (void)addVariablesMatchingPrefix:(id)arg1 forFormulaIndex:(unsigned long long)arg2 toDictionary:(id)arg3 symbolTable:(struct TSCESymbolTable *)arg4;
- (struct TSCEFunctionArgSpec *)argumentSpec;
- (unsigned int)boundSymbol;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 baseHostCell:(struct TSUCellCoord)arg3 forceReferenceInterpretation:(BOOL)arg4 symbolTable:(struct TSCESymbolTable *)arg5 oldToNewNodeMap:(id)arg6;
- (id)formulaPlainText;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (void)loadFromArchive:(const struct LetNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_fixupNodeIfFunctionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct LetNodeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChildren:(id)arg1;
- (id)string;
- (int)tokenType;

@end

