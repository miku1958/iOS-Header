//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSectionSupplementalPickerItem-Protocol.h>
#import <AvatarUI/AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal-Protocol.h>

@class NSString;

@interface AVTAvatarAttributeEditorSectionSupplementalPickerItem : NSObject <AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal, AVTAvatarAttributeEditorSectionSupplementalPickerItem>
{
    BOOL _selected;
    NSString *_localizedName;
    CDUnknownBlockType _avatarUpdater;
    CDUnknownBlockType _editorUpdater;
    NSString *_localizedDescription;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType avatarUpdater; // @synthesize avatarUpdater=_avatarUpdater;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CDUnknownBlockType editorUpdater; // @synthesize editorUpdater=_editorUpdater;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLocalizedName:(id)arg1 localizedDescription:(id)arg2 avatarUpdater:(CDUnknownBlockType)arg3 editorUpdater:(CDUnknownBlockType)arg4 selected:(BOOL)arg5;

@end

