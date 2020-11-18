//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject
{
    MPMediaLibraryView *_libraryView;
    BOOL _shouldExcludePurchaseHistoryContent;
}

+ (id)sharedSystemFilters;
- (void).cxx_destruct;
- (void)_cloudLibraryAvailabilityDidChange:(id)arg1;
- (id)_init;
- (void)_updateFilters;
- (BOOL)shouldExcludePurchaseHistoryContentForLibrary:(id)arg1;

@end

