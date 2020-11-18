//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface PSCapacityBarCategory : NSObject <NSCopying>
{
    unsigned long long _bytes;
    NSString *_identifier;
    NSString *_title;
    UIColor *_color;
}

@property unsigned long long bytes; // @synthesize bytes=_bytes;
@property (strong) UIColor *color; // @synthesize color=_color;
@property (strong) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 color:(id)arg3 bytes:(long long)arg4;

@end

