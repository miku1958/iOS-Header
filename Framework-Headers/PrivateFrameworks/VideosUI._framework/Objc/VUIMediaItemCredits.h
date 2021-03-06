//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSOrderedSet;

@interface VUIMediaItemCredits : NSObject <NSCopying>
{
    NSOrderedSet *_cast;
    NSOrderedSet *_directors;
    NSOrderedSet *_producers;
    NSOrderedSet *_screenwriters;
}

@property (copy, nonatomic) NSOrderedSet *cast; // @synthesize cast=_cast;
@property (copy, nonatomic) NSOrderedSet *directors; // @synthesize directors=_directors;
@property (readonly, nonatomic) BOOL hasCredits;
@property (copy, nonatomic) NSOrderedSet *producers; // @synthesize producers=_producers;
@property (copy, nonatomic) NSOrderedSet *screenwriters; // @synthesize screenwriters=_screenwriters;

+ (id)_arrayFromStringRepresentation:(id)arg1;
+ (id)_stringRepresentationFromArray:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStringRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)stringRepresentation;

@end

