//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/TKPickerSelectableItem.h>

#import <ToneKit/TKPickerContainerItem-Protocol.h>

@class NSString, TKTonePickerController, TKTonePickerSectionItem;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem>
{
    BOOL _needsRoomForCheckmark;
    BOOL _needsActivityIndicator;
    BOOL _needsDownloadProgress;
    float _downloadProgress;
    unsigned long long _itemKind;
    TKTonePickerController *__parentTonePickerController;
    long long _numberOfChildren;
}

@property (weak, nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController; // @synthesize _parentTonePickerController=__parentTonePickerController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDownloadProgress:) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, setter=_setItemKind:) unsigned long long itemKind; // @synthesize itemKind=_itemKind;
@property (nonatomic, setter=_setNeedsActivityIndicator:) BOOL needsActivityIndicator; // @synthesize needsActivityIndicator=_needsActivityIndicator;
@property (nonatomic, setter=_setNeedsDownloadProgress:) BOOL needsDownloadProgress; // @synthesize needsDownloadProgress=_needsDownloadProgress;
@property (nonatomic, setter=_setNeedsRoomForCheckmark:) BOOL needsRoomForCheckmark; // @synthesize needsRoomForCheckmark=_needsRoomForCheckmark;
@property (nonatomic, setter=_setNumberOfChildren:) long long numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property (readonly, nonatomic) TKTonePickerSectionItem *parentSectionItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;

@end

