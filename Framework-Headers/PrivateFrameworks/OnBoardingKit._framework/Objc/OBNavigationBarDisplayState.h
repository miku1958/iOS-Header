//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OBNavigationBarDisplayState : NSObject
{
    double _backgroundOpacity;
    double _titleOpacity;
}

@property (nonatomic) double backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
@property (nonatomic) double titleOpacity; // @synthesize titleOpacity=_titleOpacity;

+ (id)displayStateForNavigationBar:(id)arg1;
- (void)applyState:(id)arg1;
- (id)initWithNavigationBar:(id)arg1;

@end

