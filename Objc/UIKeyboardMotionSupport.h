//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSString, UIScreen;
@protocol UISplitKeyboardSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject>
{
    UIScreen *_screen;
    id<UISplitKeyboardSource> _controller;
}

@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id<UISplitKeyboardSource> masterController;
@property (readonly) Class superclass;

+ (id)supportForScreen:(id)arg1;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (BOOL)_matchingOptions:(id)arg1;
- (void)dealloc;

@end

