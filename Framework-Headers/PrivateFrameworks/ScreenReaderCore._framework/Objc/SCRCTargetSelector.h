//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCRCTargetSelector : NSObject
{
    id _target;
    SEL _selector;
}

+ (id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (SEL)selector;
- (id)target;

@end

