//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIPressInfo : NSObject
{
    BOOL _longClick;
    unsigned int _contextID;
    double _timestamp;
    long long _phase;
    long long _type;
    unsigned long long _source;
    unsigned long long _gameControllerComponent;
    double _force;
    unsigned long long _clickCount;
}

@property (nonatomic) unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property (nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property (nonatomic) double force; // @synthesize force=_force;
@property (nonatomic) unsigned long long gameControllerComponent; // @synthesize gameControllerComponent=_gameControllerComponent;
@property (nonatomic, getter=isLongClick) BOOL longClick; // @synthesize longClick=_longClick;
@property (nonatomic) long long phase; // @synthesize phase=_phase;
@property (nonatomic) unsigned long long source; // @synthesize source=_source;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)_keyboardPressInfoForType:(long long)arg1 isKeyDown:(BOOL)arg2 timestamp:(double)arg3 contextID:(unsigned int)arg4;
- (id)_sourceDescription;
- (id)description;
- (id)init;

@end

