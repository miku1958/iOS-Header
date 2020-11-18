//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICMediaApplicationBanner, NSDictionary;

@interface ICMediaApplicationBannerSyncCommand : NSObject <NSCopying>
{
    NSDictionary *_responseDictionary;
    long long _commandType;
    ICMediaApplicationBanner *_banner;
    unsigned long long _serialNumber;
}

@property (readonly, nonatomic) ICMediaApplicationBanner *banner; // @synthesize banner=_banner;
@property (readonly, nonatomic) long long commandType; // @synthesize commandType=_commandType;
@property (readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property (readonly, nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;

- (void).cxx_destruct;
- (id)_nameForCommandType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithResponseDictionary:(id)arg1;

@end

