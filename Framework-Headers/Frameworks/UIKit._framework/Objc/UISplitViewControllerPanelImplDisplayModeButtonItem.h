//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class UISplitViewControllerPanelImpl;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerPanelImplDisplayModeButtonItem : UIBarButtonItem
{
    BOOL _wasAddedToNavigationItem;
    UISplitViewControllerPanelImpl *_panelImpl;
}

@property (weak, nonatomic, getter=_panelImpl, setter=_setPanelImpl:) UISplitViewControllerPanelImpl *panelImpl; // @synthesize panelImpl=_panelImpl;
@property (nonatomic, getter=_wasAddedToNavigationItem, setter=_setWasAddedToNavigationItem:) BOOL wasAddedToNavigationItem; // @synthesize wasAddedToNavigationItem=_wasAddedToNavigationItem;

- (void).cxx_destruct;
- (void)_setOwningNavigationItem:(id)arg1;

@end
