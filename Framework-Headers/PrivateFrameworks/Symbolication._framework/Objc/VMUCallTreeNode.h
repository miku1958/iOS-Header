//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VMUCallTreeNode : NSObject
{
    VMUCallTreeNode *_parent;
    NSString *_name;
    unsigned long long _address;
    unsigned long long _numBytes;
    unsigned int _count;
    unsigned int _numChildren;
    void *_children;
}

+ (id)makeFakeRootForNode:(id)arg1;
+ (id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4;
- (void).cxx_destruct;
- (void)_printCallTreeToFile:(struct __sFILE *)arg1 cumulativeOutput:(id)arg2 indentString:(id)arg3 branchPointCount:(unsigned int)arg4 topFunctions:(id)arg5 options:(unsigned long long)arg6;
- (void)addChild:(id)arg1;
- (unsigned long long)address;
- (id)allChildren;
- (id)browserName;
- (BOOL)callTreeHasBranches;
- (id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3;
- (id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(BOOL)arg2;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (long long)compare:(id)arg1;
- (long long)comparePuttingMainThreadFirst:(id)arg1;
- (long long)comparePuttingRetainCycleNodesAtTop:(id)arg1;
- (long long)compareSizeAndCount:(id)arg1;
- (unsigned int)count;
- (void)countFunctionOccurrencesInTree:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)filterOutSymbols:(id)arg1;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(BOOL)arg4;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (id)fullOutputWithThreshold:(unsigned int)arg1 showPseudoNodes:(BOOL)arg2;
- (void)getBrowserName:(id)arg1;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
- (id)invertedNode;
- (BOOL)isMallocBlockContentNode;
- (BOOL)isPseudo;
- (id)largestTopOfStackPath;
- (id)name;
- (id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6;
- (id)nameWithoutOffset;
- (unsigned long long)numBytes;
- (unsigned int)numChildren;
- (id)parent;
- (void)parseNameIntoSymbol:(id *)arg1 library:(id *)arg2 loadAddress:(unsigned long long *)arg3 offset:(unsigned long long *)arg4 address:(unsigned long long *)arg5 suffix:(id *)arg6;
- (void)printCallTree;
- (void)printCallTreeToFile:(struct __sFILE *)arg1;
- (void)printCallTreeToFile:(struct __sFILE *)arg1 options:(unsigned long long)arg2;
- (id)pruneCount:(unsigned int)arg1;
- (id)pruneMallocSize:(unsigned long long)arg1;
- (id)pseudoName;
- (id)pseudoNodeTopOfStackChild;
- (void)setChildren:(id)arg1;
- (id)sortedChildren;
- (id)sortedChildrenWithPseudoNode;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1;
- (id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 showPseudoNodes:(BOOL)arg2;
- (id)stringFromCallTreeWithOptions:(unsigned long long)arg1;
- (unsigned int)sumOfChildCounts;
- (BOOL)symbolNameIsUnknown;

@end

