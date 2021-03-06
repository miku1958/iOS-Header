//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>

@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying>
{
    NSString *_category;
    NSString *_mode;
}

@property (readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property (readonly, copy, nonatomic) NSString *mode; // @synthesize mode=_mode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCategory:(id)arg1 mode:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAudioRouteCollectionKey:(id)arg1;

@end

