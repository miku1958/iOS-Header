//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreAutoLayout/NSObject-Protocol.h>

@class NSArray, _NSLayoutRuleNode;

@protocol _NSLayoutRuleNodeParent <NSObject>

@property (readonly, copy) NSArray *_childRuleNodes;

- (void)_addChildRuleNode:(_NSLayoutRuleNode *)arg1;
- (void)_removeChildRuleNode:(_NSLayoutRuleNode *)arg1;
@end

