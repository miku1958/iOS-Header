//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface _UIButtonBarTargetAction : NSObject
{
    UIBarButtonItem *_barButtonItem;
    CDUnknownBlockType _actionFilter;
}

@property (copy, nonatomic) CDUnknownBlockType actionFilter; // @synthesize actionFilter=_actionFilter;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property (readonly, nonatomic) SEL proxyAction;

- (void).cxx_destruct;
- (void)_invoke:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (id)initWithBarButtonItem:(id)arg1;

@end
