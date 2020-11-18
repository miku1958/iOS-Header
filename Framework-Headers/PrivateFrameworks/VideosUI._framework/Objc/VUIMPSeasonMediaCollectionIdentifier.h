//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMPMediaEntityIdentifier.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier
{
    NSNumber *_seasonNumber;
}

@property (copy, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;

+ (id)requiredMPPropertyNames;
+ (id)seasonIdentifierWithMediaItem:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;
- (id)initWithPersistentID:(id)arg1 seasonNumber:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
