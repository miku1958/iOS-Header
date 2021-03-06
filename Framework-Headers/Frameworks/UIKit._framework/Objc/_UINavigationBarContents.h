//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIBarButtonItem, UINavigationItem, UIView;

@interface _UINavigationBarContents : NSObject
{
    UINavigationItem *_topItem;
    UINavigationItem *_backItem;
    NSArray *_viewsRepresentingBackButton;
    UIView *_titleView;
    UIView *_largeTitleView;
    UIView *_promptView;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_staticBarButtonItem;
    NSArray *_cancelBarButtonItems;
    NSArray *_otherBarButtonItems;
    NSArray *_viewsRepresentingContentBackground;
}

@property (strong, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property (strong, nonatomic) UINavigationItem *backItem; // @synthesize backItem=_backItem;
@property (copy, nonatomic) NSArray *cancelBarButtonItems; // @synthesize cancelBarButtonItems=_cancelBarButtonItems;
@property (strong, nonatomic) UIView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property (copy, nonatomic) NSArray *otherBarButtonItems; // @synthesize otherBarButtonItems=_otherBarButtonItems;
@property (strong, nonatomic) UIView *promptView; // @synthesize promptView=_promptView;
@property (strong, nonatomic) UIBarButtonItem *staticBarButtonItem; // @synthesize staticBarButtonItem=_staticBarButtonItem;
@property (strong, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property (strong, nonatomic) UINavigationItem *topItem; // @synthesize topItem=_topItem;
@property (copy, nonatomic) NSArray *viewsRepresentingBackButton; // @synthesize viewsRepresentingBackButton=_viewsRepresentingBackButton;
@property (strong, nonatomic) NSArray *viewsRepresentingContentBackground; // @synthesize viewsRepresentingContentBackground=_viewsRepresentingContentBackground;

- (void).cxx_destruct;
- (id)init;

@end

