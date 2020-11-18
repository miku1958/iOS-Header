//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICUnsupportedObjectPredicateHelper : NSObject
{
}

+ (id)predicateForSupportedAttachments;
+ (id)predicateForSupportedFolders;
+ (id)predicateForSupportedNotes;
+ (void)recursivelyAddAttachment:(id)arg1 toMutableSet:(id)arg2;
+ (void)recursivelyAddFolder:(id)arg1 toMutableSet:(id)arg2;
+ (id)unitTest_unsupportedAttachmentIdentifiersWithContext:(id)arg1;
+ (id)unitTest_unsupportedFolderIdentifiersWithContext:(id)arg1;
+ (id)unsupportedAttachmentIdentifiersWithContext:(id)arg1;
+ (id)unsupportedFolderIdentifiersWithContext:(id)arg1;

@end
