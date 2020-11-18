//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView, UIViewController;

@interface SKUIContextActionsPresentationSource : NSObject
{
    UIViewController *_viewController;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    struct CGRect _sourceRect;
}

@property (strong, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property (nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (strong, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (strong, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1;
- (void)presentViewController:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3;

@end

