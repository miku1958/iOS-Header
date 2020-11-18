//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSArray, NSIndexPath, NSNumber, NSSet, NSString;

@interface XCSourceCodeTreeNode : NSObject <NSSecureCoding>
{
    NSString *_sourceCodePrefix;
    NSString *_sourceCodeSuffix;
    NSArray *_childNodes;
    long long _selectedChildNodeIndex;
    XCSourceCodeTreeNode *_parentNode;
    NSSet *_identifierValues;
    NSNumber *_index;
    NSString *_queryType;
    NSNumber *_returnType;
    NSNumber *_calleeType;
    NSNumber *_elementType;
}

@property (copy, setter=_setCalleeType:) NSNumber *_calleeType; // @synthesize _calleeType;
@property (copy, setter=_setElementType:) NSNumber *_elementType; // @synthesize _elementType;
@property (copy, setter=_setIdentifierValues:) NSSet *_identifierValues; // @synthesize _identifierValues;
@property (copy, setter=_setIndex:) NSNumber *_index; // @synthesize _index;
@property (copy, setter=_setQueryType:) NSString *_queryType; // @synthesize _queryType;
@property (copy, setter=_setReturnType:) NSNumber *_returnType; // @synthesize _returnType;
@property (strong) NSArray *childNodes;
@property (readonly, copy) NSString *displayName;
@property (weak) XCSourceCodeTreeNode *parentNode;
@property (readonly) XCSourceCodeTreeNode *rootNode;
@property (strong) XCSourceCodeTreeNode *selectedChildNode;
@property unsigned long long selectedChildNodeIndex;
@property (readonly) NSIndexPath *selectedChildNodeIndexPath;
@property (copy) NSString *sourceCodePrefix;
@property (copy) NSString *sourceCodeSuffix;

+ (unsigned long long)_defaultOptions;
+ (BOOL)_isContentEqualIgnoringSelection:(BOOL)arg1 childNodes:(id)arg2 childNodes:(id)arg3 toDistanceFromRoot:(long long)arg4;
+ (BOOL)_isContentOfNodesArraysEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(long long)arg3;
+ (BOOL)_isContentOfNodesEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(long long)arg3;
+ (id)_nodesByMergingSimilarNodes:(id)arg1;
+ (struct _NSRange)_rangeOfFirstSourceCodeTreeInString:(id)arg1 range:(struct _NSRange)arg2 compiledSourceCodeRange:(struct _NSRange *)arg3 jsonRange:(struct _NSRange *)arg4;
+ (void)_shareSourceCodeStringsForNodes:(id)arg1;
+ (id)_sourceCodeForNodes:(id)arg1 error:(id *)arg2;
+ (id)_stringRepresentationsOfNodesAsSeparateLines:(id)arg1 language:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (struct _NSRange)rangeOfFirstSourceCodeTreeInString:(id)arg1 range:(struct _NSRange)arg2;
+ (id)stringRepresentationsOfNodesAsSeparateLines:(id)arg1 language:(unsigned long long)arg2 error:(id *)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)treeForStringRepresentation:(id)arg1 range:(struct _NSRange)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_absorbOnlyChildrenIntoParents;
- (BOOL)_canHaveSiblingNode:(id)arg1;
- (BOOL)_canPushPutSolitaryRootNodes;
- (id)_copyIncludingNodesWithDistanceFromRoot:(unsigned long long)arg1 descendantChildrenArrays:(id)arg2 selectedChildNodeIndexes:(id)arg3;
- (id)_copyIncludingNodesWithDistanceFromRoot:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)_copyIncludingNodesWithMinimumDistanceFromLeaf:(unsigned long long)arg1 descendantChildrenArrays:(id)arg2 selectedChildNodeIndexes:(id)arg3;
- (id)_depthStringWithDepth:(unsigned long long)arg1;
- (unsigned long long)_descendantCount;
- (unsigned long long)_distanceFromRoot;
- (BOOL)_isContentEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(unsigned long long)arg3;
- (BOOL)_leavesHaveNoNonLeafSiblingsAndHaveSamePrefix:(id *)arg1 suffix:(id *)arg2;
- (BOOL)_leavesHaveSameAccumulatedPrefix:(id *)arg1;
- (unsigned long long)_maximumDistanceFromLeaf;
- (unsigned long long)_minimumDistanceFromLeaf;
- (id)_stringRepresentationWithCompiledCodeRange:(struct _NSRange *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_stringRepresentationWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)_treeAsJSONWithError:(id *)arg1;
- (id)_treeByPushingOutPrefix:(id *)arg1 error:(id *)arg2;
- (id)copy;
- (id)description;
- (id)descriptionWithDepth:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceCodePrefix:(id)arg1 sourceCodeSuffix:(id)arg2;
- (id)selectedChildNodesIndexesWithError:(id *)arg1;
- (id)selectedDescendantsSourceCodeWithError:(id *)arg1;
- (BOOL)setChildNodes:(id)arg1 error:(id *)arg2;
- (void)setChildrenOnAllLeafNodes:(id)arg1 selectChildNodeIndex:(unsigned long long)arg2;
- (id)sourceCodeForAllDescendants;
- (id)stringRepresentationWithCompiledCodeRange:(struct _NSRange *)arg1 error:(id *)arg2;
- (id)stringRepresentationWithError:(id *)arg1;

@end

