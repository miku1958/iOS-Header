//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface SSLookupItemArtwork : NSObject
{
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_dictionary;
@property (readonly, nonatomic) long long width;

- (id)URLWithHeight:(long long)arg1 width:(long long)arg2;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 format:(id)arg3;
- (void)dealloc;
- (BOOL)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4 forColorKind:(id)arg5;
- (id)initWithLookupDictionary:(id)arg1;

@end
