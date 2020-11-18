//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView;
@protocol SKUIModalSourceViewProviderDelegate;

@interface SKUIModalSourceViewProvider : NSObject
{
    id<SKUIModalSourceViewProviderDelegate> _delegate;
    BOOL _hideOriginalSourceView;
    UIView *_originalSourceView;
    UIBarButtonItem *_sourceButtonBarItem;
    id _userInfo;
    UIView *_sourceView;
}

@property (weak, nonatomic) id<SKUIModalSourceViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIView *originalSourceView; // @synthesize originalSourceView=_originalSourceView;
@property (strong, nonatomic) UIBarButtonItem *sourceButtonBarItem; // @synthesize sourceButtonBarItem=_sourceButtonBarItem;
@property (strong, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)animationView;
- (void)hideOriginalSourceView;
- (void)showOriginalSourceView;

@end

