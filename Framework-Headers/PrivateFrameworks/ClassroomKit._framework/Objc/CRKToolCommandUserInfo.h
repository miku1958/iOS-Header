//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CRKToolCommandUserInfo : NSObject
{
    NSString *_sessionIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;

- (void).cxx_destruct;
- (id)appVersion;
- (id)initWithSessionIdentifier:(id)arg1;

@end

