//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKComponent.h>

#import <GameplayKit/GKAgentDelegate-Protocol.h>

@class NSIndexPath, NSString, SKNode;

@interface GKSKNodeComponent : GKComponent <GKAgentDelegate>
{
    SKNode *_node;
    NSIndexPath *_serializableNodeIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKNode *node; // @synthesize node=_node;
@property (strong, nonatomic) NSIndexPath *serializableNodeIndexPath; // @synthesize serializableNodeIndexPath=_serializableNodeIndexPath;
@property (readonly) Class superclass;

+ (id)componentWithNode:(id)arg1;
- (void).cxx_destruct;
- (void)agentDidUpdate:(id)arg1;
- (void)agentWillUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1;
- (void)setEntity:(id)arg1;

@end

