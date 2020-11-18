//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSSet, UIEvent;

@protocol _UIEventRespondable <NSObject>
- (void)_componentsBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsChanged:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_componentsEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

