//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UISearchBarLayoutBase;

@protocol _UISearchBarContainerSublayoutDelegate <NSObject>

@property (nonatomic, getter=isHostingNavBarTransitionActive) BOOL hostingNavBarTransitionActive;
@property (readonly, nonatomic, getter=isProspective) BOOL prospective;

- (void)containerLayoutWillUpdateLayout:(_UISearchBarLayoutBase *)arg1;
@end
