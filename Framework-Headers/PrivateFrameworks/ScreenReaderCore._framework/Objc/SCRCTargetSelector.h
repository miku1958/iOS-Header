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

@property (readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property (readonly, weak, nonatomic) id target; // @synthesize target=_target;

+ (id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
