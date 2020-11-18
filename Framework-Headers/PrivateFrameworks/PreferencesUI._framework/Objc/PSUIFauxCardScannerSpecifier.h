//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, PSListController;

@interface PSUIFauxCardScannerSpecifier : PSSpecifier
{
    CTCellularPlanManager *_planManager;
    PSListController *_hostController;
}

@property (weak, nonatomic) PSListController *hostController; // @synthesize hostController=_hostController;

- (void).cxx_destruct;
- (void)fauxCardScannerCellPressed:(id)arg1;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 planManager:(id)arg3;

@end

