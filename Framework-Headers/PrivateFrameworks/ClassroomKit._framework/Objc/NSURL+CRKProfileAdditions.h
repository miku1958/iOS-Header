//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (CRKProfileAdditions)
+ (id)crk_iOSPlaceholderProfileURL;
+ (id)crk_macOSProfileURL;
+ (id)crk_overriddenDescriptionForItems:(id)arg1 originalDescription:(id)arg2;
+ (id)crk_uniqueTemporaryDirectoryURL;
+ (id)crk_uniqueTemporaryFileURL;
- (id)crk_escapedPath;
- (BOOL)crk_isBundle;
- (id)crk_sharingDescription;
- (id)crk_stringByRemovingWWWPrefixFromString:(id)arg1;
@end

