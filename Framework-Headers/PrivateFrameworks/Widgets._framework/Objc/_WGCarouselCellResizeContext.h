//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject
{
    BOOL _active;
    double _compactHeight;
    double _expandedHeight;
    UIViewFloatAnimatableProperty *_resizeProgress;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (nonatomic) double compactHeight; // @synthesize compactHeight=_compactHeight;
@property (nonatomic) double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property (strong, nonatomic) UIViewFloatAnimatableProperty *resizeProgress; // @synthesize resizeProgress=_resizeProgress;

- (void).cxx_destruct;

@end
