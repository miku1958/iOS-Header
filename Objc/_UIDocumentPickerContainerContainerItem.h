//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIDocumentPickerContainerItem.h>

@class BRContainer, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem
{
    NSString *_cachedSubtitle;
    BRContainer *_container;
}

@property (readonly, nonatomic) BRContainer *container;

- (void).cxx_destruct;
- (id)_blockingThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2 wantsBorder:(BOOL *)arg3;
- (void)_modelChanged;
- (id)initWithContainer:(id)arg1;
- (id)sortDate;
- (id)sortPath;
- (id)subtitle;
- (id)title;
- (long long)type;
- (id)url;

@end

