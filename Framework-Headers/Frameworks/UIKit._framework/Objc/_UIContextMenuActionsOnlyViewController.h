//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsOnlyViewController : UIViewController
{
    UITargetedPreview *_sourcePreview;
}

@property (strong, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithTargetedPreview:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;

@end
