//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol TSCellularPlanManagerCacheDelegate;

@interface TSCellularPlanManagerCache : NSObject
{
    id<TSCellularPlanManagerCacheDelegate> delegate;
    NSArray *_planItems;
    unsigned long long _supportedFlowTypes;
    NSArray *_danglingPlanItems;
}

@property (strong) NSArray *danglingPlanItems; // @synthesize danglingPlanItems=_danglingPlanItems;
@property (weak, nonatomic) id<TSCellularPlanManagerCacheDelegate> delegate; // @synthesize delegate;
@property (strong) NSArray *planItems; // @synthesize planItems=_planItems;
@property (nonatomic) unsigned long long supportedFlowTypes; // @synthesize supportedFlowTypes=_supportedFlowTypes;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_getByteRepresentationOf:(id)arg1;
- (id)_getValidatedPlanItemFor:(id)arg1;
- (void)_initialize;
- (void)_updateCachedFlowTypes;
- (void)_updateCachedPlanItems;
- (void)_updateLocalCachedPlanItems:(id)arg1;
- (void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 confirmationCode:(id)arg3 userConsent:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 userConsentResponse:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)calculateInstallConsentTextTypeFor:(id)arg1;
- (void)dealloc;
- (void)didPurchasePlanForEid:(id)arg1 iccid:(id)arg2 smdpURL:(id)arg3;
- (void)didTransferPlanForEid:(id)arg1 iccid:(id)arg2 srcIccid:(id)arg3 smdpURL:(id)arg4 state:(id)arg5;
- (id)getDanglingPlanItems;
- (id)getPredefinedLabels;
- (id)getShortLabelsForLabels:(id)arg1;
- (id)init;
- (void)provideUserResponse:(long long)arg1 confirmationCode:(id)arg2;
- (id)remapSimLabel:(id)arg1 to:(id)arg2;
- (void)resumePlanProvisioning:(BOOL)arg1 userConsent:(long long)arg2;
- (void)selectPlanForData:(id)arg1;
- (void)selectPlanForVoice:(id)arg1;
- (void)selectPlansForIMessage:(id)arg1;
- (void)sendUserResponse:(unsigned long long)arg1 confirmationCode:(id)arg2;
- (id)setLabelForPlan:(id)arg1 label:(id)arg2;
- (void)setUserInPurchaseFlow:(BOOL)arg1;
- (void)shouldShowPlanSetupWithCompletion:(CDUnknownBlockType)arg1;

@end

