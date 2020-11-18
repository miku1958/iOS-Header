//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AXPIFingerModelDelegate;

@interface AXPIFingerModel : NSObject
{
    BOOL _pressed;
    BOOL _selected;
    double _force;
    unsigned long long _shape;
    id<AXPIFingerModelDelegate> _delegate;
    struct CGPoint _location;
}

@property (strong, nonatomic) id<AXPIFingerModelDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double force; // @synthesize force=_force;
@property (nonatomic) struct CGPoint location; // @synthesize location=_location;
@property (nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
@property (nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (nonatomic) unsigned long long shape; // @synthesize shape=_shape;

+ (id)fingerModelForLocation:(struct CGPoint)arg1;
- (void).cxx_destruct;
- (id)description;

@end
