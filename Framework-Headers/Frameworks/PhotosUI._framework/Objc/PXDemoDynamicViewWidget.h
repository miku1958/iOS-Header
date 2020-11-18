//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSString, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIView;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXDemoDynamicViewWidget : NSObject <PXWidget>
{
    id<PXWidgetDelegate> _widgetDelegate;
    UIView *__view;
    double __preferredHeightPhase;
}

@property (nonatomic, setter=_setPreferredHeight:) double _preferredHeightPhase; // @synthesize _preferredHeightPhase=__preferredHeightPhase;
@property (readonly, nonatomic) UIView *_view; // @synthesize _view=__view;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (strong, nonatomic) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (strong, nonatomic) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;

- (void).cxx_destruct;
- (void)_heartBeatIncreaseHeightPhase:(BOOL)arg1;
- (void)_loadView;
- (void)_setPreferredHeightPhase:(double)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;

@end

