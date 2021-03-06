//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSArray;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityGroup : NSObject <NSCopying>
{
    NSObject<NSCopying> *_identifier;
    NSArray *_mediaEntities;
    NSArray *_sortIndexes;
}

@property (copy, nonatomic) NSObject<NSCopying> *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes; // @synthesize sortIndexes=_sortIndexes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

