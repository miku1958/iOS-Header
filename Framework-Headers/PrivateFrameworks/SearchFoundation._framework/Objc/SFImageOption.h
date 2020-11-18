//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFImageOption-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFImageOption : NSObject <SFImageOption, NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_defaultValue;
    NSDictionary *_options;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

