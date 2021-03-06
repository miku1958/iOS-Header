//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCommand.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFUpdateSearchQueryCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFUpdateSearchQueryCommand : SFCommand <SFUpdateSearchQueryCommand, NSSecureCoding, NSCopying>
{
    NSString *_searchString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

