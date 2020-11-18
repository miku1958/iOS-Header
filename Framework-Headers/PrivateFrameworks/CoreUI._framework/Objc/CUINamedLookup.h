//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIRenditionKey, NSString;

__attribute__((visibility("hidden")))
@interface CUINamedLookup : NSObject
{
    NSString *_name;
    CUIRenditionKey *_key;
    NSString *_signature;
    unsigned long long _storageRef;
    unsigned int _distilledInVersion;
    unsigned int _odContent:1;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL representsOnDemandContent;

- (BOOL)_cacheRenditionProperties;
- (unsigned int)_distilledInVersion;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTintable;
- (id)renditionKey;
- (id)renditionName;
- (void)setRepresentsOnDemandContent:(BOOL)arg1;

@end

