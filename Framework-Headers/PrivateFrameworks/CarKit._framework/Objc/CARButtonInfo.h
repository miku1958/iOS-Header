//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CARButtonInfo : NSObject
{
    unsigned long long _buttonType;
    unsigned long long _buttonLocation;
    unsigned long long _buttonPressDuration;
}

@property (readonly, nonatomic) unsigned long long buttonLocation; // @synthesize buttonLocation=_buttonLocation;
@property (readonly, nonatomic) unsigned long long buttonPressDuration; // @synthesize buttonPressDuration=_buttonPressDuration;
@property (readonly, nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;

- (id)initWithButtonType:(unsigned long long)arg1 buttonLocation:(unsigned long long)arg2 buttonPressDuration:(unsigned long long)arg3;

@end
