//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

__attribute__((visibility("hidden")))
@interface TSTEmptyExpressionNode : TSTExpressionNode
{
}

- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (id)description;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (void)loadFromArchive:(const struct EmptyExpressionNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct EmptyExpressionNodeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)string;
- (int)tokenType;

@end
