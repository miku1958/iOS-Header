//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class _ICQFlowSpecification;

@interface ICQNavigationController : UINavigationController
{
    _ICQFlowSpecification *_flowSpecification;
}

@property (readonly, nonatomic) _ICQFlowSpecification *flowSpecification; // @synthesize flowSpecification=_flowSpecification;

+ (Class)viewControllerClassForPageClassIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFlowSpecification:(id)arg1;
- (id)viewControllerForPage:(id)arg1;

@end
