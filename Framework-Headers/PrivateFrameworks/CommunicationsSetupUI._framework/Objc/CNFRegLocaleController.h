//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

#import <CommunicationsSetupUI/CNFRegRegionChooserDelegate-Protocol.h>

@class NSArray, NSString, PSSpecifier;

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate>
{
    NSString *_currentRegionID;
    NSString *_currentPhoneValue;
    PSSpecifier *_countryFieldSpecifier;
    NSArray *_phoneNumberSpecifiers;
    PSSpecifier *_phoneNumberGroupSpecifier;
    PSSpecifier *_phoneNumberFieldSpecifier;
    NSArray *_regionData;
    BOOL _isLoading;
    BOOL _isError;
    id _regionListChangeObserver;
    CDUnknownBlockType _completionBlock;
}

@property (copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (copy, nonatomic) NSString *currentPhoneValue; // @synthesize currentPhoneValue=_currentPhoneValue;
@property (copy, nonatomic) NSString *currentRegionID; // @synthesize currentRegionID=_currentRegionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *regionData; // @synthesize regionData=_regionData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildCountryFieldSpecifierCache:(id)arg1;
- (void)_buildPhoneNumberSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (id)_currentRegion;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (void)_handleRegionListLoad;
- (void)_handleTimeout;
- (void)_hideCountryPickerAnimated:(BOOL)arg1;
- (void)_loadInitialValues;
- (void)_loadRegionsIfNecessary;
- (id)_phoneTextField;
- (void)_refreshCountryFieldAnimated:(BOOL)arg1;
- (void)_refreshPhoneFieldAnimated:(BOOL)arg1;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupEventHandlers;
- (void)_showCountryPickerAnimated:(BOOL)arg1;
- (void)_showPhoneField:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_startListeningForRegionListChanges;
- (void)_startTimeout;
- (void)_stopListeningForRegionListChanges;
- (id)_unformattedPhoneNumber:(id)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)bundle;
- (id)controllerForSpecifier:(id)arg1;
- (id)countryList;
- (id)currentCountryValueForSpecifier:(id)arg1;
- (id)currentPhoneCompatibleCountryCode;
- (id)currentPhoneNumberForSpecifier:(id)arg1;
- (void)dismiss;
- (void)hideCountryPicker;
- (id)initWithRegController:(id)arg1;
- (id)logName;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (void)showCountryPicker;
- (id)specifierList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)titleString;
- (id)validationString;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

