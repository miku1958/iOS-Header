//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXCaptionHashtagsEntryView;

@protocol PXCaptionHashtagsEntryViewDelegate <NSObject>
- (void)captionHashtagsEntryViewDidBeginEditing:(PXCaptionHashtagsEntryView *)arg1;
- (void)captionHashtagsEntryViewDidEndEditing:(PXCaptionHashtagsEntryView *)arg1;
- (void)captionHashtagsEntryViewPreferredHeightDidChange:(PXCaptionHashtagsEntryView *)arg1;
- (void)captionHashtagsEntryViewRequestFocus:(PXCaptionHashtagsEntryView *)arg1;
- (BOOL)captionHashtagsEntryViewShouldBeginEditing:(PXCaptionHashtagsEntryView *)arg1;
- (BOOL)captionHashtagsEntryViewShouldEndEditing:(PXCaptionHashtagsEntryView *)arg1;
- (void)captionHashtagsEntryViewWillBeginEditing:(PXCaptionHashtagsEntryView *)arg1;
@end
