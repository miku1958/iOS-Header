//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIEvent.h>

__attribute__((visibility("hidden")))
@interface UIMoveEvent : UIEvent
{
    long long _moveDirection;
    unsigned long long _focusHeading;
}

@property (nonatomic, setter=_setFocusHeading:) unsigned long long _focusHeading; // @synthesize _focusHeading;
@property (nonatomic, setter=_setMoveDirection:) long long _moveDirection; // @synthesize _moveDirection;

- (void)_sendEventToResponder:(id)arg1;
- (long long)type;

@end

