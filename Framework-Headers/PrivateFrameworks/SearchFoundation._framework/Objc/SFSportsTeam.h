//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFSportsTeam-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage;

@interface SFSportsTeam : NSObject <SFSportsTeam, NSSecureCoding, NSCopying>
{
    SFImage *_logo;
    NSString *_record;
    NSString *_score;
    NSString *_accessibilityDescription;
    NSString *_name;
}

@property (copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SFImage *logo; // @synthesize logo=_logo;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *record; // @synthesize record=_record;
@property (copy, nonatomic) NSString *score; // @synthesize score=_score;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
