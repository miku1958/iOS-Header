//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface HUToolbarStateInstance : NSObject
{
    UIViewController *_associatedViewController;
    id _backButtonTarget;
    SEL _backButtonSelector;
    id _settingsButtonTarget;
    SEL _settingsButtonSelector;
}

@property (strong, nonatomic) UIViewController *associatedViewController; // @synthesize associatedViewController=_associatedViewController;
@property (nonatomic) SEL backButtonSelector; // @synthesize backButtonSelector=_backButtonSelector;
@property (strong, nonatomic) id backButtonTarget; // @synthesize backButtonTarget=_backButtonTarget;
@property (nonatomic) SEL settingsButtonSelector; // @synthesize settingsButtonSelector=_settingsButtonSelector;
@property (strong, nonatomic) id settingsButtonTarget; // @synthesize settingsButtonTarget=_settingsButtonTarget;

- (void).cxx_destruct;
- (id)description;
- (id)initWithViewController:(id)arg1;

@end
