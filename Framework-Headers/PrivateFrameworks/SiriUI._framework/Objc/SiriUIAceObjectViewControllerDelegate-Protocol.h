//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseAceObjectViewControllerDelegate-Protocol.h>

@class AFDataStore, AFUserUtterance, AceObject, NSArray, NSBundle, NSString, NSURL, SAUIAppPunchOut, SAUIListItem, SiriUIDisambiguationItem, UIView;
@protocol AFUIDataStoring, SiriUIViewController;

@protocol SiriUIAceObjectViewControllerDelegate <SiriUIBaseAceObjectViewControllerDelegate>
- (NSArray *)additionalSpeechInterpretationsForSiriViewController:(id<SiriUIViewController>)arg1;
- (void)cancelRequestForSiriSnippetViewController:(id<SiriUIViewController>)arg1;
- (AFDataStore *)persistentDataStoreForSiriViewController:(id<SiriUIViewController>)arg1;
- (id<AFUIDataStoring>)persistentStoreForSiriViewController:(id<SiriUIViewController>)arg1;
- (void)siriSnippetViewController:(id<SiriUIViewController>)arg1 setStatusViewHidden:(BOOL)arg2;
- (double)siriSnippetViewControllerExpectedWidth:(id<SiriUIViewController>)arg1;
- (void)siriViewController:(id<SiriUIViewController>)arg1 addSelectionResponse:(SAUIListItem *)arg2;
- (void)siriViewController:(id<SiriUIViewController>)arg1 didHideVibrantView:(UIView *)arg2;
- (SiriUIDisambiguationItem *)siriViewController:(id<SiriUIViewController>)arg1 disambiguationItemForListItem:(SAUIListItem *)arg2 disambiguationKey:(NSString *)arg3;
- (AceObject *)siriViewController:(id<SiriUIViewController>)arg1 domainObjectForIdentifier:(NSURL *)arg2;
- (NSArray *)siriViewController:(id<SiriUIViewController>)arg1 filteredDisambiguationListItems:(NSArray *)arg2;
- (SAUIListItem *)siriViewController:(id<SiriUIViewController>)arg1 listItemToPickInAutodisambiguationForListItems:(NSArray *)arg2;
- (BOOL)siriViewController:(id<SiriUIViewController>)arg1 openPunchOut:(SAUIAppPunchOut *)arg2;
- (void)siriViewController:(id<SiriUIViewController>)arg1 sendGenericAceCommands:(NSArray *)arg2;
- (void)siriViewController:(id<SiriUIViewController>)arg1 setContentOffset:(double)arg2;
- (void)siriViewController:(id<SiriUIViewController>)arg1 setDomainObject:(AceObject *)arg2 forIdentifier:(NSURL *)arg3;
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id<SiriUIViewController>)arg1;
- (struct UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id<SiriUIViewController>)arg1;
- (NSBundle *)siriViewControllerEffectiveBundleForCoreLocation:(id<SiriUIViewController>)arg1;
- (double)siriViewControllerExpectedWidth:(id<SiriUIViewController>)arg1;
- (void)siriViewControllerHeightDidChange:(id<SiriUIViewController>)arg1;
- (void)siriViewControllerHeightDidChange:(id<SiriUIViewController>)arg1 pinTopOfSnippet:(BOOL)arg2;
- (struct CGSize)siriViewControllerVisibleContentArea:(id<SiriUIViewController>)arg1;
- (double)statusBarHeightForSiriViewController:(id<SiriUIViewController>)arg1;

@optional
- (BOOL)inTextInputModeForSiriViewController:(id<SiriUIViewController>)arg1;
- (BOOL)shouldEnableInteractionForSiriViewController:(id<SiriUIViewController>)arg1;
- (void)showCorrectionScreenForSiriViewController:(id<SiriUIViewController>)arg1;
- (void)siriViewControllerDidResignFirstResponder:(id<SiriUIViewController>)arg1;
- (AFUserUtterance *)updatedUserUtteranceForSiriViewController:(id<SiriUIViewController>)arg1;
@end

