//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/KNAnimationPlugin-Protocol.h>

@class KNAnimationContext, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimationEffect : NSObject <KNAnimationPlugin>
{
    KNAnimationContext *mAnimationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)updateDirectionAttributeValue:(long long)arg1 andCustomTextDirectionValue:(unsigned long long)arg2 turnOffBounce:(BOOL)arg3 turnOffMotionBlur:(BOOL)arg4 forAttributes:(id)arg5;
- (id)initWithAnimationContext:(id)arg1;
- (struct CATransform3D)mvpMatrixWithContext:(id)arg1;
- (struct CATransform3D)mvpMatrixWithTexture:(id)arg1 andFrame:(struct CGRect)arg2;
- (struct CATransform3D)perspectiveMVPMatrixWithContext:(id)arg1;
- (struct CATransform3D)perspectiveMVPMatrixWithTexture:(id)arg1 andFrame:(struct CGRect)arg2;

@end

