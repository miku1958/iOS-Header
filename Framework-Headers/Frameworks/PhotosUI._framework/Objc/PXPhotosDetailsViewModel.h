//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutablePhotosDetailsViewModel-Protocol.h>

@class NSString, PXSectionedSelectionManager;

@interface PXPhotosDetailsViewModel : PXObservable <PXMutablePhotosDetailsViewModel>
{
    BOOL _selecting;
    BOOL _supportsSelection;
    BOOL _supportsFaceMode;
    BOOL _faceModeEnabled;
    PXSectionedSelectionManager *_selectionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled; // @synthesize faceModeEnabled=_faceModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isSelecting) BOOL selecting; // @synthesize selecting=_selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode; // @synthesize supportsFaceMode=_supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection; // @synthesize supportsSelection=_supportsSelection;

- (void).cxx_destruct;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setFaceModeEnabled:(BOOL)arg1;
- (void)setSelecting:(BOOL)arg1;
- (void)setSelectionManager:(id)arg1;
- (void)setSupportsFaceMode:(BOOL)arg1;
- (void)setSupportsSelection:(BOOL)arg1;

@end
