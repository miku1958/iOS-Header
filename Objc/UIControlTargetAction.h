//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIAction;

__attribute__((visibility("hidden")))
@interface UIControlTargetAction : NSObject
{
    UIAction *_actionHandler;
    id _target;
    SEL _action;
    unsigned long long _eventMask;
    BOOL _cancelled;
}

@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;

- (void).cxx_destruct;
- (id)description;

@end

