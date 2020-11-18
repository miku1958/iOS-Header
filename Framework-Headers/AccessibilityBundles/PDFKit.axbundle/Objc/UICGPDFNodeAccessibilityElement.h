//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXPDFNodeElement.h"

#import "UIAccessibilityContainerDataTable-Protocol.h"
#import "UIAccessibilityContainerDataTableCell-Protocol.h"

@class NSMutableArray, NSString, PDFPage;

@interface UICGPDFNodeAccessibilityElement : AXPDFNodeElement <UIAccessibilityContainerDataTable, UIAccessibilityContainerDataTableCell>
{
    struct CGPDFTaggedNode *_nodeRef;
    PDFPage *_page;
    NSMutableArray *_cachedAXElements;
    NSMutableArray *_cachedAXPDFLinks;
    NSMutableArray *_cachedAXPDFOtherLinks;
    NSMutableArray *_cachedAXPDFLinkNodes;
    NSMutableArray *_cachedAXPDFTableCellNodes;
    NSMutableArray *_cachedAXFigureChildrenNodesOfTableCellNode;
    NSMutableArray *_cachedAXCaptionChildrenNodesOfFigureNode;
    long long _listItemNumber;
    NSString *_listStyle;
    NSString *_altText;
}

@property (strong, nonatomic) NSString *altText; // @synthesize altText=_altText;
@property (strong, nonatomic) NSMutableArray *cachedAXCaptionChildrenNodesOfFigureNode; // @synthesize cachedAXCaptionChildrenNodesOfFigureNode=_cachedAXCaptionChildrenNodesOfFigureNode;
@property (strong, nonatomic) NSMutableArray *cachedAXElements; // @synthesize cachedAXElements=_cachedAXElements;
@property (strong, nonatomic) NSMutableArray *cachedAXFigureChildrenNodesOfTableCellNode; // @synthesize cachedAXFigureChildrenNodesOfTableCellNode=_cachedAXFigureChildrenNodesOfTableCellNode;
@property (strong, nonatomic) NSMutableArray *cachedAXPDFLinkNodes; // @synthesize cachedAXPDFLinkNodes=_cachedAXPDFLinkNodes;
@property (strong, nonatomic) NSMutableArray *cachedAXPDFLinks; // @synthesize cachedAXPDFLinks=_cachedAXPDFLinks;
@property (strong, nonatomic) NSMutableArray *cachedAXPDFOtherLinks; // @synthesize cachedAXPDFOtherLinks=_cachedAXPDFOtherLinks;
@property (strong, nonatomic) NSMutableArray *cachedAXPDFTableCellNodes; // @synthesize cachedAXPDFTableCellNodes=_cachedAXPDFTableCellNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long listItemNumber; // @synthesize listItemNumber=_listItemNumber;
@property (strong, nonatomic) NSString *listStyle; // @synthesize listStyle=_listStyle;
@property (nonatomic) struct CGPDFTaggedNode *nodeRef; // @synthesize nodeRef=_nodeRef;
@property (weak, nonatomic) PDFPage *page; // @synthesize page=_page;
@property (readonly) Class superclass;

+ (void)_addPDFAnnotation:(id)arg1 toPDFAccessibilityNode:(id)arg2;
+ (BOOL)_containsOnlyTextChildren:(struct CGPDFTaggedNode *)arg1;
+ (void)_findClosestLineNodeForBounds:(struct CGRect)arg1 withRootNode:(id)arg2 withDistanceBetterThan:(double *)arg3 parentFound:(id *)arg4 siblingFound:(id *)arg5;
+ (void)_findClosestWordNodeForBounds:(struct CGRect)arg1 withLineNode:(id)arg2 withDistanceBetterThan:(double *)arg3 siblingNodeFound:(id *)arg4;
+ (BOOL)_isValidTextFieldElement:(id)arg1;
+ (void)buildPDFAnnotationNodes:(id)arg1;
- (void).cxx_destruct;
- (id)_accessibilityHeadingLevel;
- (id)_accessibilityLinks;
- (id)_accessibilityPDFCustomLinksRotor;
- (void)_accessibilitySetPDFCustomLinksRotor:(id)arg1;
- (id)_accessibilityStringForListType:(int)arg1;
- (id)_attributedAccessibilityLabelForNode:(struct CGPDFTaggedNode *)arg1;
- (id)_findCaptionChildrenNodesOfFigureNode:(id)arg1;
- (id)_findFigureChildrenNodesOfTableCellNode:(id)arg1;
- (id)_findLabelChildNodeOfListItem:(id)arg1;
- (id)_findLinkChildrenNodesOfNode:(id)arg1;
- (id)_findLinkChildrenNodesThatHaveLinksWithoutLinkNode:(id)arg1;
- (id)_findTOCIChildNodeOfNode:(id)arg1;
- (id)_findTableCellNodesOfTableNode:(id)arg1 withHeadersOnly:(BOOL)arg2;
- (unsigned long long)_findTraitsForTableCellElements;
- (BOOL)_isContainerOfOnlyOneLinkNodeChild;
- (BOOL)_isSubFigure;
- (BOOL)_pdfElementHasLinkContainer;
- (unsigned long long)accessibilityColumnCount;
- (struct _NSRange)accessibilityColumnRange;
- (long long)accessibilityContainerType;
- (id)accessibilityCustomRotors;
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)accessibilityElements;
- (struct CGRect)accessibilityFrame;
- (struct CGRect)accessibilityFrameForScrolling;
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)accessibilityIdentification;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (unsigned long long)accessibilityRowCount;
- (struct _NSRange)accessibilityRowRange;
- (unsigned long long)accessibilityTraits;
- (id)initWithAccessibilityContainer:(id)arg1 pdfNodeRef:(struct CGPDFTaggedNode *)arg2 withPage:(id)arg3;
- (BOOL)isAccessibilityElement;

@end
