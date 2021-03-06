//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUListPattern : NUPattern
{
    NSArray *_list;
}

@property (readonly) NSArray *list; // @synthesize list=_list;

- (void).cxx_destruct;
- (id)init;
- (id)initWithList:(id)arg1;
- (BOOL)isEqualToListPattern:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (id)optimizedPattern;
- (id)shortestMatch;
- (id)stringRepresentation;
- (id)tokens;

@end

