//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import <iWorkImport/KNBuildCAAnimator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface KNBuildAppear : KNAnimationEffect <KNBuildCAAnimator>
{
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
+ (long long)rendererTypeForAnimationContext:(id)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(long long)arg1;
- (void)addAnimationsTo:(id)arg1 context:(id)arg2;

@end
