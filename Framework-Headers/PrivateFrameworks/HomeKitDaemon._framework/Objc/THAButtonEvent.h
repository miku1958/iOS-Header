//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class THAButton;

@interface THAButtonEvent : NSObject
{
    THAButton *_button;
    unsigned long long _state;
    double _timestamp;
}

@property (strong, nonatomic) THAButton *button; // @synthesize button=_button;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (id)serialize;

@end

