//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class _UILegibilitySettings;
@protocol CSLegibilityProviderDelegate;

@protocol CSLegibilityProviding <NSObject>

@property (weak, nonatomic) id<CSLegibilityProviderDelegate> legibilityProviderDelegate;

- (_UILegibilitySettings *)currentLegibilitySettings;
@end

