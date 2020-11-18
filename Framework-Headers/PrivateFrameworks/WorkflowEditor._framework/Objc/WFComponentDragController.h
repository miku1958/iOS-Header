//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/WFDragController.h>

#import <WorkflowEditor/CKComponentHostingViewDelegate-Protocol.h>
#import <WorkflowEditor/CKComponentProvider-Protocol.h>

@class CKComponentHostingView, NSArray, NSString, WFAction;
@protocol NSObject;

@interface WFComponentDragController : WFDragController <CKComponentProvider, CKComponentHostingViewDelegate>
{
    id<NSObject> _model;
    CKComponentHostingView *_hostingView;
}

@property (readonly, copy, nonatomic) WFAction *action;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) CKComponentHostingView *hostingView; // @synthesize hostingView=_hostingView;
@property (strong, nonatomic) id<NSObject> model; // @synthesize model=_model;
@property (readonly, nonatomic) long long sizeRangeFlexibility;
@property (readonly) Class superclass;

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)animateFromModels:(id)arg1 atPositions:(id)arg2 inSourceView:(id)arg3;
- (void)animateToModels:(id)arg1 atPositions:(id)arg2 inSourceView:(id)arg3 withWidth:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)loadView;
- (void)updateView;

@end
