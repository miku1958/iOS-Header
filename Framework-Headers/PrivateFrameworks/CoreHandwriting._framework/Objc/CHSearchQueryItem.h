//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CHSearchQueryItem : NSObject
{
    NSSet *_strokeIdentifiers;
}

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers; // @synthesize strokeIdentifiers=_strokeIdentifiers;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStrokeIdentifiers:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSearchQueryItem:(id)arg1;

@end

