//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostState : NSObject
{
    struct UIPeripheralAnimationGeometry _geometry;
    NSDictionary *_screenGeometry;
    BOOL _inPositionIsDestination;
}

@property (nonatomic) struct UIPeripheralAnimationGeometry geometry; // @synthesize geometry=_geometry;
@property (nonatomic) BOOL inPositionIsDestination; // @synthesize inPositionIsDestination=_inPositionIsDestination;
@property (strong, nonatomic) NSDictionary *screenGeometry; // @synthesize screenGeometry=_screenGeometry;

+ (id)stateWithGeometry:(struct UIPeripheralAnimationGeometry)arg1 inPositionIsDestination:(BOOL)arg2;
- (void)dealloc;

@end

