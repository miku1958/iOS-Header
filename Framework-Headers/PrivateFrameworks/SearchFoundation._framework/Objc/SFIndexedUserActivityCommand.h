//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCommand.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFIndexedUserActivityCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFIndexedUserActivityCommand : SFCommand <SFIndexedUserActivityCommand, NSSecureCoding, NSCopying>
{
    NSString *_userActivityRequiredString;
    NSString *_applicationBundleIdentifier;
}

@property (copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userActivityRequiredString; // @synthesize userActivityRequiredString=_userActivityRequiredString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

