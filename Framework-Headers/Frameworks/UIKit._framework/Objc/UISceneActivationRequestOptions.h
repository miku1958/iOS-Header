//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScene;

@interface UISceneActivationRequestOptions : NSObject
{
    BOOL _preserveLayout;
    BOOL __requestFullscreen;
    UIScene *_requestingScene;
}

@property (nonatomic, setter=_setRequestFullscreen:) BOOL _requestFullscreen; // @synthesize _requestFullscreen=__requestFullscreen;
@property (nonatomic) BOOL preserveLayout; // @synthesize preserveLayout=_preserveLayout;
@property (strong, nonatomic) UIScene *requestingScene; // @synthesize requestingScene=_requestingScene;

- (void).cxx_destruct;

@end
