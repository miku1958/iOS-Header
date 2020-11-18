//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDGraphic.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDPath, GQDWPLayoutFrame, NSString;

__attribute__((visibility("hidden")))
@interface GQDShape : GQDGraphic <GQDNameMappable>
{
    GQDPath *mPath;
    GQDWPLayoutFrame *mLayoutFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec *)stateForReading;
- (struct CGPath *)createBezierPath;
- (void)dealloc;
- (id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3;
- (BOOL)isBlank;
- (BOOL)isRectangularAndAxisAlignedToAngle:(float)arg1;
- (id)layoutFrame;
- (id)path;

@end
