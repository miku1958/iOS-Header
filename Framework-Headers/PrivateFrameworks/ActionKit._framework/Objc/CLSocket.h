//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface CLSocket : NSObject
{
    NSString *_APIKey;
    long long _appID;
    NSURL *_authURL;
    NSDictionary *_channels;
}

@property (copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property (nonatomic) long long appID; // @synthesize appID=_appID;
@property (strong, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property (strong, nonatomic) NSDictionary *channels; // @synthesize channels=_channels;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
