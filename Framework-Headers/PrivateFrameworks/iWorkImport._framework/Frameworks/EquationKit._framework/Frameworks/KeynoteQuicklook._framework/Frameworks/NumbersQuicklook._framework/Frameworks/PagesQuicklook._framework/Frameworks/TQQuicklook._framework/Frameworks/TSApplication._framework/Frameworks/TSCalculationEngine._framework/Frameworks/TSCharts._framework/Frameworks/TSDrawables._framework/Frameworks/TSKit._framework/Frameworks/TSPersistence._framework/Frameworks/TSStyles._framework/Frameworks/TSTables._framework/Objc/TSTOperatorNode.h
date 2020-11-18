//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/TSTExpressionNode.h>

@interface TSTOperatorNode : TSTExpressionNode
{
    unsigned short _operatorChar;
}

@property (nonatomic) unsigned short operatorChar; // @synthesize operatorChar=_operatorChar;

- (struct TSCEFunctionArgSpec *)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (BOOL)forceReferenceInterpretationOfChildren;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2;
- (id)initWithContext:(id)arg1 operatorChar:(unsigned short)arg2 children:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (void)loadFromArchive:(const struct OperatorNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct OperatorNodeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)string;
- (int)tokenType;

@end
