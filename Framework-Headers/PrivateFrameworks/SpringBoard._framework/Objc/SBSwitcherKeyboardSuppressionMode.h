//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SBSwitcherKeyboardSuppressionMode : NSObject
{
    NSSet *_appLayouts;
    long long _type;
}

@property (readonly, nonatomic) NSSet *appLayouts; // @synthesize appLayouts=_appLayouts;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)newSuppressionModeForSwitcherScenesFromAppLayouts:(id)arg1;
+ (id)suppressionModeForAllScenes;
+ (id)suppressionModeNone;
- (void).cxx_destruct;
- (id)_initWithAppLayouts:(id)arg1 suppressionType:(long long)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)suppressesAllScenes;
- (BOOL)suppressesNoScenes;
- (BOOL)suppressesSwitcherScenesOnly;

@end
