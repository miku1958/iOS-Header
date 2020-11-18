//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIActivityItemMapping : NSObject
{
}

+ (id)_activeActivityViewControllers;
+ (id)_activityViewControllerForActivityItem:(id)arg1;
+ (void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3;
+ (void)_addToActiveActivityViewControllers:(id)arg1;
+ (id)_attachmentNameForActivityItem:(id)arg1 activityType:(id)arg2;
+ (void)_clearActivityItems:(id)arg1;
+ (id)_dataTypeIdentifierForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_itemProviderForActivityItem:(id)arg1 typeIdentifier:(id)arg2 thumbnailSize:(struct CGSize)arg3 activityType:(id)arg4;
+ (id)_openURLAnnotationForActivityItem:(id)arg1 activityType:(id)arg2;
+ (void)_removeFromActiveActivityViewControllers:(id)arg1;
+ (id)_subjectForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_thumbnailImageDataForActivityItem:(id)arg1 thumbnailSize:(struct CGSize)arg2 activityType:(id)arg3;
+ (id)_thumbnailImageForActivityItem:(id)arg1 thumbnailSize:(struct CGSize)arg2 activityType:(id)arg3;

@end

