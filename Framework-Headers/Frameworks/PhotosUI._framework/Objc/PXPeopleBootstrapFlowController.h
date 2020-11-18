//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleFlowController-Protocol.h>

@class NSArray, NSString, PXPeopleBootstrapContext, UIViewController;
@protocol PXPeopleBootstrapFlowDelegate, PXPeopleFlowViewController, PXPeopleSuggestionManagerDataSource;

@interface PXPeopleBootstrapFlowController : NSObject <PXPeopleFlowController>
{
    id<PXPeopleBootstrapFlowDelegate> _bootstrapDelegate;
    id<PXPeopleSuggestionManagerDataSource> _bootstrapDataSource;
    PXPeopleBootstrapContext *_context;
    unsigned long long _namingResultType;
    NSArray *_viewControllers;
    unsigned long long _viewControllerIndex;
}

@property (strong, nonatomic) id<PXPeopleSuggestionManagerDataSource> bootstrapDataSource; // @synthesize bootstrapDataSource=_bootstrapDataSource;
@property (strong, nonatomic) id<PXPeopleBootstrapFlowDelegate> bootstrapDelegate; // @synthesize bootstrapDelegate=_bootstrapDelegate;
@property (readonly, nonatomic) PXPeopleBootstrapContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasNextViewController;
@property (readonly, nonatomic) BOOL hasPreviousViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long namingResultType; // @synthesize namingResultType=_namingResultType;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *previousViewController;
@property (readonly, nonatomic) BOOL shouldPresentNaming;
@property (readonly, nonatomic) BOOL shouldPresentPostNaming;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long viewControllerIndex; // @synthesize viewControllerIndex=_viewControllerIndex;
@property (copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)commonInitWithContext:(id)arg1;
- (void)computeViewControllersForBootstrapFlow;
- (void)dealloc;
- (void)done:(id)arg1;
- (id)init;
- (id)initEmptyFlowWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;

@end

