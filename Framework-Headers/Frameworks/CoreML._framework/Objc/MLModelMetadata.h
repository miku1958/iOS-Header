//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MLModelMetadata : NSObject
{
    NSString *_name;
    NSString *_shortDescription;
    NSString *_versionString;
    NSString *_author;
    NSString *_license;
    NSDictionary *_creatorDefined;
}

@property (readonly) NSString *author; // @synthesize author=_author;
@property (readonly) NSDictionary *creatorDefined; // @synthesize creatorDefined=_creatorDefined;
@property (readonly) NSString *license; // @synthesize license=_license;
@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property (readonly) NSString *versionString; // @synthesize versionString=_versionString;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 shortDescription:(id)arg2 versionString:(id)arg3 author:(id)arg4 license:(id)arg5 creatorDefined:(id)arg6;

@end

