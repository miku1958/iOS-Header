//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/NSMutableCopying-Protocol.h>

@class SBTransientOverlayViewController;

@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _animated;
    CDUnknownBlockType _completionHandler;
    long long _requestType;
    SBTransientOverlayViewController *_viewController;
}

@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
@property (readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // @synthesize viewController=_viewController;

+ (id)dismissalRequestForAllViewControllers;
+ (id)dismissalRequestForViewController:(id)arg1;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

