//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNReferenceNode.h>

@class NSString;

@interface SCNNodeReference : SCNReferenceNode
{
    NSString *referenceSceneName;
    NSString *referenceNodeName;
}

@property (copy, nonatomic) NSString *referenceNodeName; // @synthesize referenceNodeName;
@property (copy, nonatomic) NSString *referenceSceneName; // @synthesize referenceSceneName;

- (void)_reloadWithScene:(id)arg1;

@end
