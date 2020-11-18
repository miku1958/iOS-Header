//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSTreeNode.h>

@class NSString;

@interface VSKeyPathBasedTreeNode : VSTreeNode
{
    NSString *_keyPath;
}

@property (readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 keyPath:(id)arg2;

@end
