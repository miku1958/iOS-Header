//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface HMAsset : NSObject
{
    NSString *_identifier;
    NSDictionary *_metadata;
    NSURL *_resourceURL;
}

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, copy, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 resourceURL:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

