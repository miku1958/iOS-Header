//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject
{
    NSString *_name;
    int _transition;
    CDUnknownBlockType _completion;
    double _curlUpRevealedHeight;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;

@end

