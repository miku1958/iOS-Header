//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PGGraphNode;

@interface PGPeopleVisitingVisit : NSObject
{
    NSMutableArray *_momentNodes;
    BOOL _hasVeryCloseMoments;
    PGGraphNode *_addressNode;
}

@property (readonly) PGGraphNode *addressNode; // @synthesize addressNode=_addressNode;
@property (readonly) BOOL isValid;
@property (readonly) BOOL matchesCloseVisitCriteria;
@property (readonly) BOOL matchesFarVisitCriteria;
@property (readonly) NSArray *momentNodes; // @synthesize momentNodes=_momentNodes;

- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1 isVeryClose:(BOOL)arg2;
- (id)description;
- (id)initWithAddressNode:(id)arg1;

@end

