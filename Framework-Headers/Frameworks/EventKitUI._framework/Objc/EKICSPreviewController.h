//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/EKEventViewDelegatePrivate-Protocol.h>

@class EKEvent, EKEventStore, EKEventViewController, EKICSPreviewModel, NSString, UIViewController;
@protocol EKICSPreviewControllerDelegate;

@interface EKICSPreviewController : NSObject <EKEventViewDelegatePrivate>
{
    EKICSPreviewModel *_model;
    EKEventStore *_eventStore;
    EKEventViewController *_currentImport;
    UIViewController *_contentViewController;
    BOOL _importing;
    BOOL _hasCustomCancelButton;
    long long _cancelButtonType;
    EKEvent *_eventFromUID;
    BOOL _allowsImport;
    BOOL _allowsEditing;
    BOOL _allowsSubitems;
    BOOL _allowsInvalidProperties;
    BOOL _allowsToDos;
    int _eventUID;
    id<EKICSPreviewControllerDelegate> _previewDelegate;
    unsigned long long _actionsState;
}

@property (nonatomic) unsigned long long actionsState; // @synthesize actionsState=_actionsState;
@property (nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property (nonatomic) BOOL allowsImport; // @synthesize allowsImport=_allowsImport;
@property (nonatomic) BOOL allowsInvalidProperties; // @synthesize allowsInvalidProperties=_allowsInvalidProperties;
@property (nonatomic) BOOL allowsSubitems; // @synthesize allowsSubitems=_allowsSubitems;
@property (nonatomic) BOOL allowsToDos; // @synthesize allowsToDos=_allowsToDos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int eventUID; // @synthesize eventUID=_eventUID;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isImporting;
@property (weak, nonatomic) id<EKICSPreviewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long totalEventCount;
@property (readonly, nonatomic) unsigned long long unimportedEventCount;

- (void).cxx_destruct;
- (BOOL)_anyCalendarsSupportingImport;
- (BOOL)_calendarSupportsImport:(id)arg1;
- (unsigned long long)_countOfCalendarsSupportingImport;
- (void)_createCancelButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)_databaseChanged:(id)arg1;
- (id)_defaultCalendarForImport;
- (void)_enumerateSupportedCalendarsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_shouldShowCalendarChooser;
- (void)_updateCancelButton;
- (void)calendarChooserDidCancel:(id)arg1;
- (void)calendarChooserDidFinish:(id)arg1;
- (void)dealloc;
- (id)detailViewForEvent:(id)arg1 eventInRealStore:(BOOL)arg2 isUpdate:(BOOL)arg3;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (BOOL)eventViewControllerShouldDismissSelf:(id)arg1;
- (void)handleDidImportEvent:(id)arg1 fromController:(id)arg2 intoCalendar:(id)arg3;
- (void)handleImportEventError;
- (void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2;
- (void)icsPreviewListControllerDidRequestImportAll:(id)arg1;
- (void)importAllIntoCalendar:(id)arg1;
- (void)importAllRequested:(id)arg1;
- (void)importEventFromController:(id)arg1 intoCalendar:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithEventUID:(int)arg1 eventStore:(id)arg2;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (id)popoverContentController;
- (void)presentCalendarChooserForController:(id)arg1;
- (void)removeCancelButton;
- (void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (id)singleExistingEventUniqueID;
- (id)viewController;

@end

