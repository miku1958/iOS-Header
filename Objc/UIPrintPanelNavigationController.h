//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

@protocol UIPrintPanelAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface UIPrintPanelNavigationController : UINavigationController
{
    id<UIPrintPanelAppearanceDelegate> _appearanceDelegate;
}

@property (weak, nonatomic) id<UIPrintPanelAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;

- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (void)_presentationControllerDidDismiss:(id)arg1;

@end

