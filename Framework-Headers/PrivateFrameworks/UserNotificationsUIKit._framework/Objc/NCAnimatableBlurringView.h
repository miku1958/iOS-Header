//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCBlurring-Protocol.h>

@class NSString;

@interface NCAnimatableBlurringView : UIView <NCBlurring>
{
    BOOL _didConfigureBlurFilter;
    double _inputRadius;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double inputRadius; // @synthesize inputRadius=_inputRadius;
@property (readonly) Class superclass;

+ (id)_inputRadiusKeyPath;
- (void)_configureBlurFilterIfNecessary;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;

@end
