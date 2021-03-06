//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface VUIMediaItemEntityTypesFetchResponse : NSObject
{
    BOOL _localMediaItemsAvailable;
    NSOrderedSet *_mediaItemEntityTypes;
}

@property (nonatomic, getter=areLocalMediaItemsAvailable) BOOL localMediaItemsAvailable; // @synthesize localMediaItemsAvailable=_localMediaItemsAvailable;
@property (copy, nonatomic) NSOrderedSet *mediaItemEntityTypes; // @synthesize mediaItemEntityTypes=_mediaItemEntityTypes;

- (void).cxx_destruct;
- (BOOL)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(BOOL)arg3;
- (id)description;
- (id)init;

@end

