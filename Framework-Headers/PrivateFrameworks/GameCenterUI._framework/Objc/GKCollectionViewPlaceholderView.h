//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <GameCenterUI/_GKStateMachineDelegate-Protocol.h>

@class GKPlaceholderContentStateMachine, GKPlaceholderView, NSArray, NSString, UIActivityIndicatorView;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <_GKStateMachineDelegate>
{
    GKPlaceholderView *_placeholderView;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    NSString *_noContentButtonTitle;
    id _noContentButtonTarget;
    SEL _noContentButtonAction;
    NSString *_errorTitle;
    NSString *_errorMessage;
    long long _alignment;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
    NSArray *_cachedConstraints;
}

@property (nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property (strong, nonatomic) NSArray *cachedConstraints; // @synthesize cachedConstraints=_cachedConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property (strong, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property (strong, nonatomic) GKPlaceholderContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property (strong, nonatomic) NSString *loadingState; // @dynamic loadingState;
@property (nonatomic) SEL noContentButtonAction; // @synthesize noContentButtonAction=_noContentButtonAction;
@property (nonatomic) id noContentButtonTarget; // @synthesize noContentButtonTarget=_noContentButtonTarget;
@property (strong, nonatomic) NSString *noContentButtonTitle; // @synthesize noContentButtonTitle=_noContentButtonTitle;
@property (strong, nonatomic) NSString *noContentMessage; // @synthesize noContentMessage=_noContentMessage;
@property (strong, nonatomic) NSString *noContentTitle; // @synthesize noContentTitle=_noContentTitle;
@property (strong, nonatomic) GKPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property (readonly) Class superclass;

- (void)buttonPressed;
- (void)dealloc;
- (void)delayedShowLoadingIndicator;
- (void)didEnterErrorState;
- (void)didEnterLoadingState;
- (void)didEnterNoContentState;
- (void)didExitErrorState;
- (void)didExitLoadingState;
- (void)didExitNoContentState;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end
