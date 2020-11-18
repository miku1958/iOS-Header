//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSArray, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate
{
    unsigned long long _permittedArrowDirections;
    NSArray *_passthroughViews;
    UIView *_anchorView;
    UIBarButtonItem *_anchorBarButtonItem;
}

@property (strong, nonatomic) UIBarButtonItem *anchorBarButtonItem; // @synthesize anchorBarButtonItem=_anchorBarButtonItem;
@property (strong, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property (copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property (nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;
- (CDUnknownBlockType)newDefaultPrepareHandlerForSegue:(id)arg1;

@end

