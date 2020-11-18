//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, XCSourceCodeTreeNode, XCUIRecorderNodeFinder;

@interface XCUIRecorderNodeFinderMatch : NSObject
{
    NSSet *_matchingSnapshots;
    XCSourceCodeTreeNode *_node;
    XCUIRecorderNodeFinder *_ancestorFinder;
    NSMutableArray *_descendantFinders;
}

@property (strong) XCUIRecorderNodeFinder *ancestorFinder; // @synthesize ancestorFinder=_ancestorFinder;
@property (strong) NSMutableArray *descendantFinders; // @synthesize descendantFinders=_descendantFinders;
@property (copy) NSSet *matchingSnapshots; // @synthesize matchingSnapshots=_matchingSnapshots;
@property (strong) XCSourceCodeTreeNode *node; // @synthesize node=_node;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNode:(id)arg1 matchingSnapshots:(id)arg2 ancestorFinder:(id)arg3;
- (void)invalidate;
- (id)nodeIncludingDescendants;

@end
