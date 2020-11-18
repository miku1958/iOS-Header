//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRadioStoreContentReference.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface ICRadioTrackInfoContentReference : ICRadioStoreContentReference <NSCopying, NSSecureCoding>
{
    NSDictionary *_trackInfo;
}

@property (readonly, copy, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1 trackInfo:(id)arg2;
- (id)rawContentDictionary;

@end
