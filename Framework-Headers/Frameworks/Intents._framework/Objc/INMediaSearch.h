//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@interface INMediaSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    long long _mediaType;
    long long _sortOrder;
    NSString *_mediaName;
    NSString *_artistName;
    NSString *_albumName;
    NSArray *_genreNames;
    NSArray *_moodNames;
    INDateComponentsRange *_releaseDate;
    long long _reference;
    NSString *_mediaIdentifier;
}

@property (readonly, copy, nonatomic) NSArray *activityNames;
@property (readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property (readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *genreNames; // @synthesize genreNames=_genreNames;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaName; // @synthesize mediaName=_mediaName;
@property (readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property (readonly, copy, nonatomic) NSArray *moodNames; // @synthesize moodNames=_moodNames;
@property (readonly, nonatomic) long long reference; // @synthesize reference=_reference;
@property (readonly, copy, nonatomic) INDateComponentsRange *releaseDate; // @synthesize releaseDate=_releaseDate;
@property (readonly, nonatomic) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 releaseDate:(id)arg8 reference:(long long)arg9 mediaIdentifier:(id)arg10;
- (BOOL)isEqual:(id)arg1;

@end

