//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKJSTabBarItem, NSArray;

@protocol IKJSTabBar <JSExport>

@property (strong, nonatomic) IKJSTabBarItem *selectedTab;
@property (readonly, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) IKJSTabBarItem *transientTab;

@end

