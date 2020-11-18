//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSplashController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanAddingViewController : BFFSplashController <TSSetupFlowItem>
{
    BOOL _installCompleted;
    id<TSSIMSetupFlowDelegate> _delegate;
    unsigned long long _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL installCompleted; // @synthesize installCompleted=_installCompleted;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 description:(id)arg2 type:(unsigned long long)arg3;
- (void)planInfoDidUpdate:(id)arg1 planListError:(id)arg2;
- (void)prepare:(CDUnknownBlockType)arg1;
- (void)topLeftButtonTapped;
- (void)viewDidLoad;

@end

