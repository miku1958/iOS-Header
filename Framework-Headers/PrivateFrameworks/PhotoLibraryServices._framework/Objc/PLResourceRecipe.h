//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@interface PLResourceRecipe : NSObject <NSCopying>
{
}

+ (Class)classFromRecipeID:(unsigned int)arg1;
+ (id)recipeFromID:(unsigned int)arg1;
- (void)applyToResource:(id)arg1 sourceProperties:(id)arg2 inContext:(id)arg3;
- (BOOL)colorSpaceIsNativeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithRecipeID:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)recipeID;

@end

