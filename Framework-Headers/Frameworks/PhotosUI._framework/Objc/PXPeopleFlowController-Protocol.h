//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class UIViewController;
@protocol PXPeopleFlowViewController;

@protocol PXPeopleFlowController <NSObject>

@property (readonly, nonatomic) BOOL hasNextViewController;
@property (readonly, nonatomic) BOOL hasPreviousViewController;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (readonly, nonatomic) UIViewController<PXPeopleFlowViewController> *previousViewController;

- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
@end

