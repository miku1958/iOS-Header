//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PUSearchZeroKeywordSection : NSObject
{
    long long _sectionType;
    NSArray *_viewModels;
}

@property (readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property (readonly, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1 viewModels:(id)arg2;
- (void)removeItem:(id)arg1;

@end
