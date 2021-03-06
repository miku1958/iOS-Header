//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBFolderControllerConfiguration.h>

@class CHSAvocadoDescriptorProvider, UIViewController;
@protocol SBHLegibility, SBHLibraryProvider, SBHSidebarProvider;

@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration
{
    BOOL _forSnapshot;
    BOOL _dockExternal;
    BOOL _dockPinnedForRotation;
    BOOL _showsDoneButtonWhileEditing;
    BOOL _showsAddWidgetButtonWhileEditing;
    BOOL _sidebarVisible;
    BOOL _sidebarPinned;
    UIViewController *_pullDownSearchViewController;
    UIViewController<SBHLegibility> *_todayViewController;
    UIViewController<SBHLibraryProvider> *_trailingCustomViewController;
    UIViewController<SBHSidebarProvider> *_sidebarViewController;
    unsigned long long _sidebarAllowedOrientations;
    unsigned long long _ignoresOverscrollOnFirstPageOrientations;
    unsigned long long _ignoresOverscrollOnLastPageOrientations;
    unsigned long long _folderPageManagementAllowedOrientations;
    CHSAvocadoDescriptorProvider *_avocadoDescriptorProvider;
}

@property (strong, nonatomic) CHSAvocadoDescriptorProvider *avocadoDescriptorProvider; // @synthesize avocadoDescriptorProvider=_avocadoDescriptorProvider;
@property (nonatomic, getter=isDockExternal) BOOL dockExternal; // @synthesize dockExternal=_dockExternal;
@property (nonatomic, getter=isDockPinnedForRotation) BOOL dockPinnedForRotation; // @synthesize dockPinnedForRotation=_dockPinnedForRotation;
@property (nonatomic) unsigned long long folderPageManagementAllowedOrientations; // @synthesize folderPageManagementAllowedOrientations=_folderPageManagementAllowedOrientations;
@property (nonatomic, getter=isForSnapshot) BOOL forSnapshot; // @synthesize forSnapshot=_forSnapshot;
@property (nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations; // @synthesize ignoresOverscrollOnFirstPageOrientations=_ignoresOverscrollOnFirstPageOrientations;
@property (nonatomic) unsigned long long ignoresOverscrollOnLastPageOrientations; // @synthesize ignoresOverscrollOnLastPageOrientations=_ignoresOverscrollOnLastPageOrientations;
@property (strong, nonatomic) UIViewController *pullDownSearchViewController; // @synthesize pullDownSearchViewController=_pullDownSearchViewController;
@property (nonatomic) BOOL showsAddWidgetButtonWhileEditing; // @synthesize showsAddWidgetButtonWhileEditing=_showsAddWidgetButtonWhileEditing;
@property (nonatomic) BOOL showsDoneButtonWhileEditing; // @synthesize showsDoneButtonWhileEditing=_showsDoneButtonWhileEditing;
@property (nonatomic) unsigned long long sidebarAllowedOrientations; // @synthesize sidebarAllowedOrientations=_sidebarAllowedOrientations;
@property (nonatomic, getter=isSidebarPinned) BOOL sidebarPinned; // @synthesize sidebarPinned=_sidebarPinned;
@property (strong, nonatomic) UIViewController<SBHSidebarProvider> *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property (nonatomic, getter=isSidebarVisible) BOOL sidebarVisible; // @synthesize sidebarVisible=_sidebarVisible;
@property (strong, nonatomic) UIViewController<SBHLegibility> *todayViewController; // @synthesize todayViewController=_todayViewController;
@property (strong, nonatomic) UIViewController<SBHLibraryProvider> *trailingCustomViewController; // @synthesize trailingCustomViewController=_trailingCustomViewController;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end

