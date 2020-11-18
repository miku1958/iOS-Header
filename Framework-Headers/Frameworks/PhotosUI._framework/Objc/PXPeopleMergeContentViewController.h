//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol PXPerson;

@interface PXPeopleMergeContentViewController : UIViewController
{
    id<PXPerson> _targetPerson;
    id<PXPerson> _draggedPerson;
}

@property (strong, nonatomic) id<PXPerson> draggedPerson; // @synthesize draggedPerson=_draggedPerson;
@property (strong, nonatomic) id<PXPerson> targetPerson; // @synthesize targetPerson=_targetPerson;

- (void).cxx_destruct;
- (id)initWithTargetPerson:(id)arg1 draggedPerson:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;

@end

