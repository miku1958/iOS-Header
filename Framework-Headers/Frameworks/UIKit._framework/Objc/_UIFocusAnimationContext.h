//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFocusAnimationContext-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusAnimationContext : NSObject <UIFocusAnimationContext>
{
    double _duration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithDuration:(double)arg1;

@end

