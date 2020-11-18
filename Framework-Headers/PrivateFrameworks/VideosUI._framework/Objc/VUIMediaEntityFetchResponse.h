//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSArray;

@interface VUIMediaEntityFetchResponse : NSObject <NSCopying>
{
    unsigned long long _mediaEntitySubtype;
    NSArray *_mediaEntities;
    NSArray *_sortIndexes;
    NSArray *_grouping;
    NSArray *_groupingSortIndexes;
}

@property (copy, nonatomic) NSArray *grouping; // @synthesize grouping=_grouping;
@property (copy, nonatomic) NSArray *groupingSortIndexes; // @synthesize groupingSortIndexes=_groupingSortIndexes;
@property (copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property (nonatomic) unsigned long long mediaEntitySubtype; // @synthesize mediaEntitySubtype=_mediaEntitySubtype;
@property (copy, nonatomic) NSArray *sortIndexes; // @synthesize sortIndexes=_sortIndexes;

- (void).cxx_destruct;
- (BOOL)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

