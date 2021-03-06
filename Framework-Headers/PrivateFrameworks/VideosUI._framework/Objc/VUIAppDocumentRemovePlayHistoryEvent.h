//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAppDocumentUpdateEvent.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRemovePlayHistoryEvent : VUIAppDocumentUpdateEvent <NSCopying>
{
    NSSet *_removedCanonicalIDs;
}

@property (copy, nonatomic) NSSet *removedCanonicalIDs; // @synthesize removedCanonicalIDs=_removedCanonicalIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithRemovedCanonicalIDs:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

