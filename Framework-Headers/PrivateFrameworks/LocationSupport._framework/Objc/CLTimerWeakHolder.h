//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLTimer;

@interface CLTimerWeakHolder : NSObject
{
    CLTimer *_timer;
}

@property (readonly, weak, nonatomic) CLTimer *timer; // @synthesize timer=_timer;

+ (id)holderWithTimer:(id)arg1;
- (void).cxx_destruct;
- (id)initWithTimer:(id)arg1;

@end
