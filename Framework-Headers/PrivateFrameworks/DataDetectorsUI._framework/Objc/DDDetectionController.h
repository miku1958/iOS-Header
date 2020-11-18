//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDetectorsUI/UIActionSheetDelegate-Protocol.h>

@class BCSBusinessQueryService, DDActionController, NSMapTable, NSOperationQueue, NSString;
@protocol DDDetectionControllerDelegate, OS_dispatch_queue;

@interface DDDetectionController : NSObject <UIActionSheetDelegate>
{
    NSOperationQueue *_fullScannerQueue;
    NSOperationQueue *_urlScannerQueue;
    NSObject<OS_dispatch_queue> *_protectQueue;
    NSMapTable *_containerToOperationsTable;
    NSMapTable *_containerToResultsTable;
    NSMapTable *_containerToContextsTable;
    DDActionController *_actionController;
    BCSBusinessQueryService *_bizService;
    NSObject<DDDetectionControllerDelegate> *_delegate;
}

@property (strong, nonatomic) BCSBusinessQueryService *_bizService; // @synthesize _bizService;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DDDetectionControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_shouldConsiderResultForCoreRecents:(struct __DDResult *)arg1;
+ (unsigned long long)allPublicTypes;
+ (id)barcodeContext:(id)arg1 preview:(BOOL)arg2 contact:(id)arg3 ics:(id)arg4;
+ (id)filterResults:(id)arg1 forTypes:(unsigned long long)arg2 referenceDate:(id)arg3 referenceTimeZone:(id)arg4;
+ (id)lightUnderlineColorFromTextColor:(id)arg1;
+ (CDUnknownBlockType)messagesActionHandler;
+ (void)setMessagesActionHandler:(CDUnknownBlockType)arg1;
+ (id)sharedController;
+ (id)tapAndHoldSchemes;
+ (id)updateContext:(id)arg1 forResult:(struct __DDResult *)arg2 atIndex:(unsigned long long)arg3 ofStorage:(id)arg4;
- (void).cxx_destruct;
- (id)_URLForLinkAttributeValue:(id)arg1;
- (id)_applyBlock:(CDUnknownBlockType)arg1 withResultsAtIndex:(unsigned long long)arg2 ofStorage:(id)arg3 context:(id)arg4;
- (id)_businessItemForNumber:(id)arg1 messageable:(BOOL *)arg2;
- (void)_cacheBusinessPhoneNumber:(id)arg1;
- (BOOL)_checkIfBusinessWithResult:(struct __DDResult *)arg1 messageable:(BOOL *)arg2;
- (BOOL)_checkIfBusinessWithURL:(id)arg1 messageable:(BOOL *)arg2;
- (void)_commonResetResultsForContainer:(id)arg1;
- (void)_doURLification:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (id)_ensureURLIsURL:(id)arg1;
- (void)_interactionDidStartForResult:(struct __DDResult *)arg1;
- (void)_interactionDidStartForURL:(id)arg1;
- (id)_newOperationForContainer:(id)arg1;
- (id)_phoneNumberFromResult:(struct __DDResult *)arg1;
- (BOOL)_phoneNumberIsABusinessNumber:(id)arg1 messageable:(BOOL *)arg2;
- (id)_plainTextAugmentedContext:(id)arg1 withFrame:(id)arg2;
- (void)_resetStoredResultsForContainer:(id)arg1;
- (struct __DDResult *)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id *)arg3;
- (struct __DDResult *)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id *)arg3;
- (struct __DDResult *)_resultForIdentifier:(id)arg1 withResults:(id)arg2 context:(id *)arg3;
- (id)_resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 subResult:(id *)arg3 url:(id *)arg4 effectiveRange:(struct _NSRange *)arg5;
- (struct __DDResult *)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id *)arg3;
- (struct __DDResult *)_resultForURL:(id)arg1 withResults:(id)arg2 context:(id *)arg3;
- (BOOL)_shouldImmediatelyShowActionSheetForCoreResult:(struct __DDResult *)arg1;
- (BOOL)_shouldImmediatelyShowActionSheetForURL:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1 clearPreviousResults:(BOOL)arg2;
- (id)_subResultAtIndex:(unsigned long long)arg1 ofResult:(id)arg2;
- (BOOL)actionIsCancellable;
- (id)actionsAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)actionsForResult:(struct __DDResult *)arg1 context:(id)arg2;
- (id)actionsForURL:(id)arg1;
- (id)actionsForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5;
- (id)attributedTitleForResult:(struct __DDResult *)arg1 updaterBlock:(CDUnknownBlockType)arg2;
- (id)attributedTitleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 updaterBlock:(CDUnknownBlockType)arg3;
- (id)attributedTitleForURL:(id)arg1 updaterBlock:(CDUnknownBlockType)arg2;
- (id)barcodeActionsForContext:(id)arg1 URL:(id)arg2 result:(struct __DDResult *)arg3 contact:(id)arg4 ics:(id)arg5;
- (id)barcodePreviewActionForContext:(id)arg1 URL:(id)arg2 result:(struct __DDResult *)arg3 contact:(id)arg4 ics:(id)arg5;
- (void)cancelAction;
- (void)cancelURLificationForContainer:(id)arg1;
- (void)cancelURLificationForFrame:(id)arg1;
- (void)containerWillBeRemoved:(id)arg1;
- (id)copyContextForContainer:(id)arg1;
- (void)dealloc;
- (id)defaultActionAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)defaultActionForURL:(id)arg1 results:(id)arg2 context:(id)arg3;
- (void)frameWillBeRemoved:(id)arg1;
- (id)init;
- (void)interactionDidStartAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (void)interactionDidStartForResult:(struct __DDResult *)arg1;
- (void)interactionDidStartForURL:(id)arg1;
- (BOOL)isPerformingAction;
- (id)linkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2 interactionDelegate:(id)arg3;
- (void)performAction:(id)arg1 fromView:(id)arg2 alertController:(id)arg3 interactionDelegate:(id)arg4;
- (void)performAction:(id)arg1 inView:(id)arg2 interactionDelegate:(id)arg3;
- (id)preferredTextAttributesForLinkAtCharacterIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (void)resetResultsForContainer:(id)arg1;
- (void)resetResultsForFrame:(id)arg1;
- (void)resetResultsForTextView:(id)arg1;
- (struct __DDResult *)resultForDOMNode:(id)arg1 forFrame:(id)arg2;
- (struct __DDResult *)resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (struct __DDResult *)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id *)arg4;
- (struct __DDResult *)resultForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 extendedContext:(id *)arg6;
- (void)setContext:(id)arg1 forContainer:(id)arg2;
- (void)setContext:(id)arg1 forFrame:(id)arg2;
- (void)setResults:(struct __CFArray *)arg1 forContainer:(id)arg2;
- (void)setResults:(struct __CFArray *)arg1 forFrame:(id)arg2;
- (BOOL)shouldIgnoreMessageActionForURL:(id)arg1;
- (BOOL)shouldImmediatelyLaunchDefaultActionForResult:(struct __DDResult *)arg1;
- (BOOL)shouldImmediatelyLaunchDefaultActionForTapAndHoldAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (BOOL)shouldImmediatelyLaunchDefaultActionForURL:(id)arg1;
- (BOOL)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;
- (BOOL)shouldUseLightStyleAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 moreHighlight:(BOOL *)arg3;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3;
- (id)titleForResult:(struct __DDResult *)arg1 subResult:(struct __DDResult *)arg2 withURL:(id)arg3 context:(id)arg4;
- (id)titleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)titleForURL:(id)arg1 results:(id)arg2 context:(id)arg3;

@end
