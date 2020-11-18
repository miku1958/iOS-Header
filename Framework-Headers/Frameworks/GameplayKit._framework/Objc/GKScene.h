//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>
#import <GameplayKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol GKSceneRootNodeType;

@interface GKScene : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_entities;
    NSMutableDictionary *_graphs;
    id<GKSceneRootNodeType> _rootNode;
}

@property (readonly, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property (readonly, nonatomic) NSDictionary *graphs; // @synthesize graphs=_graphs;
@property (strong, nonatomic) id<GKSceneRootNodeType> rootNode; // @synthesize rootNode=_rootNode;

+ (id)_sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;
+ (id)sceneWithFileNamed:(id)arg1;
+ (id)sceneWithFileNamed:(id)arg1 rootNode:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addEntity:(id)arg1;
- (void)addGraph:(id)arg1 name:(id)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeEntity:(id)arg1;
- (void)removeGraph:(id)arg1;

@end

