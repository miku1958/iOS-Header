//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol AVTAvatarAttributeEditorHeaderPicker, AVTAvatarAttributeEditorSection;

@protocol AVTAvatarAttributeEditorSection <NSObject>

@property (strong, nonatomic) id<AVTAvatarAttributeEditorHeaderPicker> headerAccessory;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *sectionItems;

- (BOOL)shouldDisplaySeparatorBeforeSection:(id<AVTAvatarAttributeEditorSection>)arg1;
- (BOOL)shouldDisplayTitle;
@end
