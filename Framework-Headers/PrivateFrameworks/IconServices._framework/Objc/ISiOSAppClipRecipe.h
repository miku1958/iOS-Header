//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorRecipe-Protocol.h>

__attribute__((visibility("hidden")))
@interface ISiOSAppClipRecipe : NSObject <ISCompositorRecipe>
{
    BOOL _shouldOnlyDrawBorder;
    BOOL _shouldDrawPlaceholder;
}

@property BOOL shouldDrawPlaceholder; // @synthesize shouldDrawPlaceholder=_shouldDrawPlaceholder;
@property BOOL shouldOnlyDrawBorder; // @synthesize shouldOnlyDrawBorder=_shouldOnlyDrawBorder;

- (id)appRect;
- (id)blurRadius;
- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;

@end

