//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSUUID, UIWindow;

__attribute__((visibility("hidden")))
@interface UIKBTouchState : NSObject <NSCopying>
{
    double _timestamp;
    long long _phase;
    UIWindow *_window;
    double _pathMajorRadius;
    unsigned long long _pathIndex;
    NSUUID *_touchUUID;
    struct CGPoint _locationInWindow;
}

@property (readonly, nonatomic) struct CGPoint locationInWindow; // @synthesize locationInWindow=_locationInWindow;
@property (readonly, nonatomic) unsigned long long pathIndex; // @synthesize pathIndex=_pathIndex;
@property (readonly, nonatomic) double pathMajorRadius; // @synthesize pathMajorRadius=_pathMajorRadius;
@property (readonly, nonatomic) long long phase; // @synthesize phase=_phase;
@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) NSUUID *touchUUID; // @synthesize touchUUID=_touchUUID;
@property (readonly, nonatomic) UIWindow *window; // @synthesize window=_window;

+ (void)releaseUUIDForTouch:(id)arg1;
+ (id)touchForTouchUUID:(id)arg1;
+ (id)touchStateForTouch:(id)arg1;
+ (id)touchUUIDForTouch:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (struct CGPoint)locationInView:(id)arg1;

@end
