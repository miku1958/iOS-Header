//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUSuggestedSearch.h>

@class NSMapTable, PLSearchIndexDateFormatter;

__attribute__((visibility("hidden")))
@interface PUSuggestedSearchRandomMomentAggreagator : PUSuggestedSearch
{
    NSMapTable *_searches;
    PLSearchIndexDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (void)_inqRestart;
- (id)init;
- (void)registerSearch:(id)arg1;

@end

