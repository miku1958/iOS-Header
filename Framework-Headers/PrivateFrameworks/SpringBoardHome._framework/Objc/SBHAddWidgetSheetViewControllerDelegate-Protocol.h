//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHWidgetDragHandlerPassing-Protocol.h>

@class CHSAvocadoDescriptor, SBIconView, SBWidgetIcon, UIViewController;
@protocol SBHWidgetSheetViewControlling;

@protocol SBHAddWidgetSheetViewControllerDelegate <SBHWidgetDragHandlerPassing>
- (void)addWidgetSheetViewController:(UIViewController *)arg1 didSelectWidgetIconView:(SBIconView *)arg2;
- (void)addWidgetSheetViewControllerDidAppear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerDidCancel:(UIViewController *)arg1;
- (void)addWidgetSheetViewControllerDidDisappear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerWillAppear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerWillDisappear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;

@optional
- (SBWidgetIcon *)addWidgetSheetViewController:(UIViewController *)arg1 widgetIconForDescriptor:(CHSAvocadoDescriptor *)arg2 sizeClass:(long long)arg3;
@end

