//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface XCSourceCodeRecording : NSObject
{
    unsigned long long _language;
    NSMutableArray *_treeNodes;
    NSMutableSet *_variableTreeNodes;
    NSArray *_reservedNames;
    NSMutableDictionary *_variableNameToContentNodeDictionary;
    long long _nextVariableCount;
}

@property (strong, setter=_setTreeNodes:) NSArray *_treeNodes; // @synthesize _treeNodes;
@property (readonly) unsigned long long language; // @synthesize language=_language;
@property (strong) NSMutableDictionary *variableNameToContentNodeDictionary; // @synthesize variableNameToContentNodeDictionary=_variableNameToContentNodeDictionary;

- (BOOL)_createAndShareLocalVariableUsingSourceNode:(id)arg1 atIndex:(long long)arg2;
- (id)_nodes:(id)arg1 matchingDistanceFromRoot:(BOOL)arg2 variableContentNode:(id)arg3 withVariableName:(id)arg4 startingIndex:(long long)arg5 replacedNodes:(long long *)arg6 indexOfFirstReplacedNode:(long long *)arg7;
- (void)_shareCommonSectionsInLocalVariables;
- (BOOL)_shareCommonSectionsUsingExistingLocalVariables;
- (BOOL)_shareLongestCommonSection_StartAtIndex:(long long)arg1 nextCandidateIndex:(long long *)arg2;
- (id)_sourceCodePrefixForVariableName:(id)arg1 variableType:(unsigned long long)arg2;
- (id)_stringRepresentationWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)_transformedVariablePrefixForLabel:(id)arg1;
- (id)_uniqueVariableNameWithName:(id)arg1;
- (unsigned long long)_variableClassTypeForVariableContentNode:(id)arg1;
- (id)_variableNameForElementType:(unsigned long long)arg1 label:(id)arg2 classType:(unsigned long long)arg3;
- (id)_variableNameForVariableContentNode:(id)arg1;
- (id)_variableSuffixForElementType:(unsigned long long)arg1 classType:(unsigned long long)arg2;
- (void)appendNode:(id)arg1 replaceLastNode:(BOOL)arg2;
- (id)copy;
- (void)dealloc;
- (id)init;
- (id)initWithLanguage:(unsigned long long)arg1 reservedNames:(id)arg2;
- (id)stringRepresentationWithError:(id *)arg1;
- (id)variableNodeForNode:(id)arg1 withName:(id)arg2 variableType:(unsigned long long)arg3;

@end

