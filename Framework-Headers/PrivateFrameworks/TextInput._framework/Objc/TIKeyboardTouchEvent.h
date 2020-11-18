//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding>
{
    int _stage;
    int _fingerID;
    double _radius;
    double _timestamp;
    long long _pathIndex;
    long long _forcedKeyCode;
    struct CGPoint _location;
}

@property (readonly, nonatomic) int fingerID; // @synthesize fingerID=_fingerID;
@property (readonly, nonatomic) long long forcedKeyCode; // @synthesize forcedKeyCode=_forcedKeyCode;
@property (readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property (readonly, nonatomic) long long pathIndex; // @synthesize pathIndex=_pathIndex;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property (readonly, nonatomic) int stage; // @synthesize stage=_stage;
@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7;
+ (id)touchEventWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStage:(int)arg1 location:(struct CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7;
- (id)shortDescription;

@end

