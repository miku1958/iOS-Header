//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _UIIdleModeLayoutAttributes : NSObject
{
    BOOL _wantsDimmingOverlay;
    double _alphaOffset;
    struct CGPoint _centerOffset;
    struct CGAffineTransform _transform;
}

@property (nonatomic) double alphaOffset; // @synthesize alphaOffset=_alphaOffset;
@property (nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property (nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property (nonatomic) BOOL wantsDimmingOverlay; // @synthesize wantsDimmingOverlay=_wantsDimmingOverlay;

- (id)init;

@end

