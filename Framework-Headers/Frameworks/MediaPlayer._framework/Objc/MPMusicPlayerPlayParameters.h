//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPIdentifierSet, NSDictionary, NSString;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding>
{
    BOOL _libraryContent;
    NSDictionary *_dictionary;
    MPIdentifierSet *_identifiers;
    NSString *_itemKind;
}

@property (readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers; // @synthesize identifiers=_identifiers;
@property (readonly, copy, nonatomic) NSString *itemKind; // @synthesize itemKind=_itemKind;
@property (readonly, nonatomic, getter=isLibraryContent) BOOL libraryContent; // @synthesize libraryContent=_libraryContent;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

