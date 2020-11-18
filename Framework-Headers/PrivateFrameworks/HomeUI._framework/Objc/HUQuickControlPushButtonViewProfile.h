//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

#import <HomeUI/HUQuickControlIncrementalConvertibleProfile-Protocol.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>
{
    BOOL _toggleColorScheme;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
@property (readonly, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property (readonly) Class superclass;
@property (nonatomic) BOOL toggleColorScheme; // @synthesize toggleColorScheme=_toggleColorScheme;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
