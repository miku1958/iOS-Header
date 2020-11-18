//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSString;

__attribute__((visibility("hidden")))
@interface ML3SpotlightMatchingNameCache : NSObject
{
    unordered_set_f2692727 _matchingSet;
    NSString *_matchString;
    BOOL _idle;
    ML3MusicLibrary *_library;
}

+ (void)initialize;
+ (void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

