//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDRGradient : NSObject <GQDNameMappable>
{
    struct __CFArray *mStops;
    int mType;
    float mOpacity;
    float mAngle;
    struct CGPoint mStart;
    struct CGPoint mEnd;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec *)stateForReading;
- (float)angle;
- (void)dealloc;
- (struct CGPoint)end;
- (float)opacity;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (struct CGPoint)start;
- (struct __CFArray *)stops;
- (int)type;

@end

