//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REImage.h>

@class NSBundle, NSString;

@interface RENamedImage : REImage
{
    NSString *_name;
    NSBundle *_bundle;
}

@property (readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

