//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXFontAttributes-Protocol.h>

@class NSString;

@interface SXJSONFontAttributes : SXJSONObject <SXFontAttributes>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *familyName; // @dynamic familyName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long style; // @dynamic style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long weight; // @dynamic weight;
@property (readonly, nonatomic) long long width; // @dynamic width;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)styleWithValue:(id)arg1 withType:(int)arg2;
- (long long)weightWithValue:(id)arg1 withType:(int)arg2;
- (long long)widthWithValue:(id)arg1 withType:(int)arg2;

@end

