//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/CKComponentController.h>

#import <WorkflowEditor/WFAppSearchViewControllerDelegate-Protocol.h>

@class NSString;

@interface WFAppPickerParameterComponentController : CKComponentController <WFAppSearchViewControllerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)appSearchViewController:(id)arg1 didFinishWithApp:(id)arg2;
- (void)appSearchViewControllerDidCancel:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)parameterLayoutTapped:(id)arg1;

@end

