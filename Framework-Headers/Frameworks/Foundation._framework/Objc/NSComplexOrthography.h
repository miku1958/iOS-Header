//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOrthography.h>

@class NSDictionary, NSString;

@interface NSComplexOrthography : NSOrthography
{
    NSString *_dominantScript;
    NSDictionary *_languageMap;
    unsigned int _orthographyFlags;
}

+ (void)initialize;
- (void)dealloc;
- (id)dominantScript;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (id)languageMap;
- (unsigned int)orthographyFlags;

@end

