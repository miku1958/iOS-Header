//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface SearchUIConfirmationHUDTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

