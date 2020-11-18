//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCoding-Protocol.h>
#import <GameplayKit/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface GKGraph : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_nodes;
    struct GKCGraph *_cGraph;
    NSMutableDictionary *__info;
}

@property (strong, nonatomic) NSMutableDictionary *_info; // @synthesize _info=__info;
@property (readonly, nonatomic) NSArray *nodes;

+ (id)graph;
+ (id)graphWithNodes:(id)arg1;
- (void).cxx_destruct;
- (void)addNodes:(id)arg1;
- (struct GKCGraph *)cGraph;
- (void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(BOOL)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)findPathFromNode:(id)arg1 toNode:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodes:(id)arg1;
- (struct GKCGraph *)makeCGraph;
- (id)nodesMut;
- (void)removeNodes:(id)arg1;

@end
