//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSString, TSCECalculationEngine, TSKChangeNotifier, TSKDocumentRoot, TSTReferenceColorHelper, TSTUidRangeRef;

__attribute__((visibility("hidden")))
@interface TSTReferenceNode : TSTExpressionNode
{
    TSTUidRangeRef *mUidRangeRef;
    BOOL mRangeWithFunction;
    unsigned char mRangeContext;
    NSString *mRefString;
    NSString *mFormulaPlainText;
    TSTReferenceColorHelper *mReferenceColorHelper;
    BOOL mBlankForKeyboardInsertion;
    BOOL mSuppressAutomaticNamedReferenceInvalidation;
    UUIDData_5fbc143e mHostTableUID;
}

@property (nonatomic, getter=isBlankForKeyboardInsertion) BOOL blankForKeyboardInsertion;
@property (readonly, nonatomic) TSCECalculationEngine *calculationEngine;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (nonatomic) UUIDData_5fbc143e hostTableUID; // @synthesize hostTableUID=mHostTableUID;
@property (readonly, nonatomic, getter=isLocalReference) BOOL localReference;
@property (readonly, nonatomic, getter=isNonSpanningRange) BOOL nonSpanningRange;
@property (readonly, nonatomic, getter=isRange) BOOL range;
@property (nonatomic) unsigned char rangeContext; // @synthesize rangeContext=mRangeContext;
@property (nonatomic) struct TSCERangeCoordinate rangeCoordinate; // @dynamic rangeCoordinate;
@property (nonatomic) struct TSCERangeRef rangeReference; // @dynamic rangeReference;
@property (nonatomic, getter=isRangeWithFunction) BOOL rangeWithFunction; // @synthesize rangeWithFunction=mRangeWithFunction;
@property (strong, nonatomic) TSTReferenceColorHelper *referenceColorHelper; // @synthesize referenceColorHelper=mReferenceColorHelper;
@property (readonly, nonatomic, getter=isResizable) BOOL resizable;
@property (readonly, nonatomic, getter=isSimpleRowOrColumnReference) BOOL simpleRowOrColumnReference;
@property (readonly, nonatomic, getter=isSingleASTNode) BOOL singleASTNode;
@property (nonatomic) unsigned char stickyBits;
@property (readonly, nonatomic) UUIDData_5fbc143e tableUID;
@property (readonly, nonatomic) TSTUidRangeRef *uidRangeRef; // @synthesize uidRangeRef=mUidRangeRef;

+ (unsigned char)stickyBitsForReference:(const struct TSCERangeRef *)arg1 calcEngine:(id)arg2;
- (id).cxx_construct;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)exportString;
- (id)formulaPlainText;
- (unsigned long long)hash;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(struct TSCERangeCoordinate)arg3 stickyBits:(unsigned char)arg4 hostTableUID:(const UUIDData_5fbc143e *)arg5 tableUID:(const UUIDData_5fbc143e *)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned long long)arg8 lastIndex:(unsigned long long)arg9;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(struct TSCERangeCoordinate)arg3 stickyBits:(unsigned char)arg4 hostTableUID:(const UUIDData_5fbc143e *)arg5 tableUID:(const UUIDData_5fbc143e *)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned long long)arg8 lastIndex:(unsigned long long)arg9 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg10;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 uidRangeRef:(id)arg3 hostTableUID:(const UUIDData_5fbc143e *)arg4 referenceColorHelper:(id)arg5 firstIndex:(unsigned long long)arg6 lastIndex:(unsigned long long)arg7 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg8;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg5;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (BOOL)isValidReference;
- (void)loadFromArchive:(const struct ReferenceNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 forTopLeft:(BOOL)arg2 stickyBits:(unsigned char)arg3 hostCell:(struct TSUCellCoord)arg4;
- (void)p_resetMenu;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct ReferenceNodeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setRangeReference:(struct TSCERangeRef)arg1 stickyBits:(unsigned char)arg2;
- (id)string;
- (int)tokenType;

@end
