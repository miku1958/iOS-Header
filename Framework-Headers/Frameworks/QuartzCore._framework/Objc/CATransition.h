//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@class NSDictionary, NSString;

@interface CATransition : CAAnimation
{
}

@property float endProgress;
@property (copy) NSDictionary *options;
@property float startProgress;
@property (copy) NSString *subtype;
@property unsigned int transitionFlags;
@property (copy) NSString *type;

- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (id)filter;
- (void)setFilter:(id)arg1;

@end

