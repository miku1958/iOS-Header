//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPMapsSupport : NSObject
{
}

+ (void)_clearMapsFavorites;
+ (id)favoritesContainer;
+ (BOOL)harvestMapItem:(id)arg1 documentIdentifier:(id)arg2 groupIdentifier:(id)arg3 includingPostalAddress:(BOOL)arg4 error:(id *)arg5;
+ (void)importMapsData;

@end

