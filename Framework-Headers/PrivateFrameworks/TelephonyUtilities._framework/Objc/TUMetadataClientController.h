//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TUMetadataCache;

@interface TUMetadataClientController : NSObject
{
    TUMetadataCache *_metadataCache;
}

@property (strong, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_metadataDestinationIdForSearchItem:(id)arg1;
- (id)directoryLabelForDestinationID:(id)arg1;
- (id)directoryLabelForSearchItem:(id)arg1;
- (id)init;
- (id)locationForDestinationID:(id)arg1;
- (id)locationForSearchItem:(id)arg1;
- (id)suggestionForDestinationID:(id)arg1;
- (id)suggestionForSearchItem:(id)arg1;
- (void)updateMetadataForDestinationID:(id)arg1;
- (void)updateMetadataForRecentCalls:(id)arg1;

@end

