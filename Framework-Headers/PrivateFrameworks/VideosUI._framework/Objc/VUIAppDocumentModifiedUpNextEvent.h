//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAppDocumentUpdateEvent.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSSet;

@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <NSCopying>
{
    NSSet *_addedCanonicalIDs;
    NSSet *_removedCanonicalIDs;
}

@property (copy, nonatomic) NSSet *addedCanonicalIDs; // @synthesize addedCanonicalIDs=_addedCanonicalIDs;
@property (copy, nonatomic) NSSet *removedCanonicalIDs; // @synthesize removedCanonicalIDs=_removedCanonicalIDs;

- (void).cxx_destruct;
- (id)coalescedEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2;
- (id)initWithAddedCanonicalIDs:(id)arg1 removedCanonicalIDs:(id)arg2;
- (id)initWithDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
