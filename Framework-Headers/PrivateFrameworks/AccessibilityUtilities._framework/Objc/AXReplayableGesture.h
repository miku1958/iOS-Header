//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AXReplayableGesture : NSObject <NSSecureCoding>
{
    NSArray *_allEvents;
    BOOL _arePointsDeviceRelative;
}

+ (BOOL)supportsSecureCoding;
+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint)arg1;
- (void).cxx_destruct;
- (BOOL)arePointsDeviceRelative;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)numberOfEvents;
- (struct CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (void)updateForLandscape:(BOOL)arg1;

@end

