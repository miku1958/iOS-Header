//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimationPluginMenu : NSObject
{
    NSMutableDictionary *_localizedStringToDirectionMap;
    NSMutableDictionary *_directionToLocalizedStringMap;
    NSMutableArray *_localizedDirections;
    NSMutableArray *_directions;
    unsigned long long _defaultDirection;
}

@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long defaultDirection; // @synthesize defaultDirection=_defaultDirection;
@property (readonly, nonatomic) NSArray *directions;
@property (readonly, nonatomic) NSArray *localizedDirections;

+ (id)animationPluginMenu;
+ (id)localizedStringForDirection:(unsigned long long)arg1 shortVersion:(BOOL)arg2;
- (void).cxx_destruct;
- (void)addDirection:(unsigned long long)arg1 localizedMenuString:(id)arg2;
- (void)addDirection:(unsigned long long)arg1 useShortString:(BOOL)arg2;
- (BOOL)containsDirection:(unsigned long long)arg1;
- (unsigned long long)directionForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForDirection:(unsigned long long)arg1;
- (id)init;

@end

