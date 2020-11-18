//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface NFCVASCommandConfiguration : NSObject <NSCopying>
{
    long long _mode;
    NSString *_passTypeIdentifier;
    NSURL *_url;
}

@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithVASMode:(long long)arg1 passTypeIdentifier:(id)arg2 url:(id)arg3;

@end
