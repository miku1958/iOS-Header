//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicLibrarySongsViewConfiguration.h>

@interface MusicMediaPickerLibrarySongsViewConfiguration : MusicLibrarySongsViewConfiguration
{
    BOOL _isMultipleSelectionAllowed;
}

- (void)_multipleSelectionAllowanceDidChange:(id)arg1;
- (BOOL)canPreviewEntityValueContext:(id)arg1;
- (void)dealloc;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithMultipleSelectionAllowed:(BOOL)arg1;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end
