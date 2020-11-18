//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3DAAPImportOperation.h>

@class ML3EntityReplacer;

__attribute__((visibility("hidden")))
@interface ML3HomeSharingImportOperation : ML3DAAPImportOperation
{
    ML3EntityReplacer *_containerReplacer;
    int _playlistNameOrder;
}

- (void).cxx_destruct;
- (BOOL)_performHomeSharingImportWithTransaction:(id)arg1;
- (shared_ptr_9dbb0ac9)containerImportItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1 withTrackIds:(vector_bbba3654)arg2 trackPersonIdentifiers:(vector_6e7979f9)arg3;
- (shared_ptr_9dbb0ac9)importItemFromDAAPElement:(shared_ptr_37fa1f3d)arg1;
- (unsigned long long)importSource;
- (void)main;
- (void)updateImportProgress:(float)arg1;

@end
