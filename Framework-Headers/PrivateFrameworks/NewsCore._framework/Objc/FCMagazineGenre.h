//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCMagazineGenre : NSObject <NSCopying>
{
    NSString *_genre;
    NSString *_localizedDescription;
}

@property (copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property (copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;

+ (id)magazineGenreWithGenre:(id)arg1 localizedDescription:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithGenre:(id)arg1 localizedDescription:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

