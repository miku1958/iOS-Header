//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADAngleArcPathElement : OADPathElement
{
    struct OADAdjustPoint mCenter;
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
    BOOL mConnectedToPrevious;
}

- (struct OADAdjustCoord)angleLength;
- (struct OADAdjustPoint)center;
- (BOOL)connectedToPrevious;
- (id)initWithCenter:(struct OADAdjustPoint)arg1 semiaxes:(struct OADAdjustPoint)arg2 startAngle:(struct OADAdjustCoord)arg3 angleLength:(struct OADAdjustCoord)arg4 connectedToPrevious:(BOOL)arg5;
- (struct OADAdjustPoint)semiaxes;
- (struct OADAdjustCoord)startAngle;

@end

