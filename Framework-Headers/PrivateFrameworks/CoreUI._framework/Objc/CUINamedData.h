//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSData, NSString;

@interface CUINamedData : CUINamedLookup
{
}

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *utiType;

- (id)_renditionName;
- (id)description;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

