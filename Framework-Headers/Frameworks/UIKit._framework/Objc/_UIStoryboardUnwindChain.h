//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIStoryboardUnwindChain : NSObject
{
    NSMutableArray *_viewControllers;
    unsigned long long _commonAncestorIdx;
    unsigned long long _modalAncestorContainingSourceIdx;
}

@property (readonly, nonatomic) UIViewController *commonAncestorViewController;
@property (readonly, nonatomic) UIViewController *modalAncestorContainingSourceViewController;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(CDUnknownBlockType)arg1;
- (id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2;

@end
