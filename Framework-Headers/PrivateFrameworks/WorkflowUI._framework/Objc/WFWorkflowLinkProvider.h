//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSString, NSURL, WFWorkflow;
@protocol WFUserInterfaceHost;

@interface WFWorkflowLinkProvider : UIActivityItemProvider
{
    WFWorkflow *_workflow;
    NSString *_exclusiveActivityType;
    NSURL *_workflowURL;
    NSString *_workflowID;
    NSURL *_realmURL;
    id<WFUserInterfaceHost> _userInterface;
}

@property (copy, nonatomic) NSString *exclusiveActivityType; // @synthesize exclusiveActivityType=_exclusiveActivityType;
@property (readonly, nonatomic) NSURL *realmURL; // @synthesize realmURL=_realmURL;
@property (readonly, nonatomic) id<WFUserInterfaceHost> userInterface; // @synthesize userInterface=_userInterface;
@property (readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property (readonly, nonatomic) NSString *workflowID; // @synthesize workflowID=_workflowID;
@property (strong, nonatomic) NSURL *workflowURL; // @synthesize workflowURL=_workflowURL;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 workflow:(id)arg2 userInterface:(id)arg3;
- (id)item;

@end

