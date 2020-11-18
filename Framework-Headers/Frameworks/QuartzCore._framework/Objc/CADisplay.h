//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayMode, NSArray, NSString;

@interface CADisplay : NSObject
{
    void *_impl;
}

@property BOOL allowsVirtualModes;
@property (readonly, nonatomic) NSArray *availableModes;
@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, getter=isCloned) BOOL cloned;
@property (readonly, getter=isCloningSupported) BOOL cloningSupported;
@property (copy, nonatomic) NSString *colorMode;
@property (readonly) unsigned int connectionSeed;
@property (strong, nonatomic) CADisplayMode *currentMode;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly) unsigned int displayId;
@property (readonly, getter=isExternal) BOOL external;
@property (readonly, nonatomic) struct CGRect frame;
@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (readonly) double overscanAmount;
@property (readonly) struct CGSize overscanAmounts;
@property (readonly, getter=isOverscanned) BOOL overscanned;
@property (readonly, nonatomic) CADisplayMode *preferredMode;
@property (readonly) int processId;
@property (readonly) double refreshRate;
@property (readonly, nonatomic) struct CGRect safeBounds;
@property (readonly) unsigned int seed;
@property (readonly, getter=isSupported) BOOL supported;
@property (readonly) long long tag;
@property (readonly) NSString *uniqueId;

+ (id)TVOutDisplay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)displays;
+ (id)mainDisplay;
- (id)_initWithDisplay:(struct Display *)arg1;
- (void)_invalidate;
- (id)description;
- (void)update;

@end

