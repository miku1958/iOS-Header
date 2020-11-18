//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (LSAdditions)

@property (readonly, getter=isiWorkURL) BOOL iWorkURL;

+ (id)LS_iCloudFamilyURLWithComponents:(id)arg1;
+ (id)ls_bizURL:(id)arg1;
- (id)LS_nooverride:(id)arg1;
- (BOOL)LS_pathHasCaseInsensitivePrefix:(id)arg1;
- (BOOL)conformsToOverridePatternWithKey:(id)arg1;
- (id)fmfURL;
- (id)fmipURL;
- (id)iCloudEmailPrefsURL;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;
- (id)iTunesStoreURL;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (id)keynoteLiveURL;
- (id)keynoteLiveURL_noFragment;
- (id)mapsURL;
- (id)photosURL;
@end

