//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupItemArtwork : NSObject
{
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;

+ (id)colorForColorKind:(id)arg1 inColorDictionary:(id)arg2;
- (void).cxx_destruct;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;
- (id)colors;
- (id)initWithDictionary:(id)arg1;

@end

