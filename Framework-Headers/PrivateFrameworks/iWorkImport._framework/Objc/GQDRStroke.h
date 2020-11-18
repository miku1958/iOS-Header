//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDColor, GQDRStrokePattern, NSString;

__attribute__((visibility("hidden")))
@interface GQDRStroke : NSObject <GQDNameMappable>
{
    float mMiterLimit;
    float mWidth;
    int mCap;
    int mJoin;
    GQDColor *mColor;
    GQDRStrokePattern *mPattern;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec *)stateForReading;
- (int)cap;
- (id)color;
- (void)dealloc;
- (int)join;
- (float)miterLimit;
- (id)pattern;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (float)width;

@end

