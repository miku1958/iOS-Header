//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface MLMovieProperties : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSArray *castMembers;
@property (copy, nonatomic) NSString *copyrightWarning;
@property (copy, nonatomic) NSArray *directors;
@property (copy, nonatomic) NSArray *producers;
@property (copy, nonatomic) NSArray *screenwriters;
@property (copy, nonatomic) NSString *studioName;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)copyMoviePropertiesDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMoviePropertiesDictionary:(id)arg1;

@end

