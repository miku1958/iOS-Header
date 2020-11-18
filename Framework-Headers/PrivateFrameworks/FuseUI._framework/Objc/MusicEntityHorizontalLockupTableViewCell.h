//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <FuseUI/MusicEntityContentDescriptorViewConfiguring-Protocol.h>
#import <FuseUI/MusicEntityHorizontalLockupViewDelegate-Protocol.h>
#import <FuseUI/MusicEntityViewDownloadInformationObserving-Protocol.h>
#import <FuseUI/MusicEntityViewPlaybackStatusObserving-Protocol.h>

@class MusicEntityHorizontalLockupView, MusicEntityViewContentDescriptor, NSString;
@protocol MusicEntityValueProviding;

@interface MusicEntityHorizontalLockupTableViewCell : UITableViewCell <MusicEntityHorizontalLockupViewDelegate, MusicEntityContentDescriptorViewConfiguring, MusicEntityViewDownloadInformationObserving, MusicEntityViewPlaybackStatusObserving>
{
    MusicEntityHorizontalLockupView *_lockupView;
    BOOL _entityDisabled;
}

@property (strong, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEntityDisabled) BOOL entityDisabled; // @synthesize entityDisabled=_entityDisabled;
@property (strong, nonatomic) id<MusicEntityValueProviding> entityValueProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MusicEntityHorizontalLockupView *lockupView; // @synthesize lockupView=_lockupView;
@property (readonly) Class superclass;

+ (Class)horizontalLockupViewClass;
+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
- (void).cxx_destruct;
- (void)_updateDisclosureIndicator;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (void)_updateHighlightStateAnimated:(BOOL)arg1;
- (void)dealloc;
- (void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)horizontalLockupViewDidLayoutSubviews:(id)arg1;
- (void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned long long)arg2;
- (void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1;
- (BOOL)horizontalLockupViewShouldLayoutAsEditing:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setDownloadInformation:(struct MusicEntityDownloadInformation)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPlaybackStatus:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateForAsynchronousPropertyLoadCompleted;

@end

