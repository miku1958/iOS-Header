//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PKSharedAppletSubcredentialsManifest : NSObject
{
    NSString *_identifier;
    NSString *_version;
    NSDictionary *_items;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSDictionary *items; // @synthesize items=_items;
@property (readonly, nonatomic) NSDictionary *sanitizedItems;
@property (readonly, nonatomic) NSString *version; // @synthesize version=_version;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
